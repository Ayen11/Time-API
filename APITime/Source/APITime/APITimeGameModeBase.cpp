// Copyright Epic Games, Inc. All Rights Reserved.


#include "APITimeGameModeBase.h"
#include "Kismet/KismetMathLibrary.h"

AAPITimeGameModeBase::AAPITimeGameModeBase() :
City(ECity::EC_Tokyo),
SecondCountFloat(1.f)
{
	Http = &FHttpModule::Get();
}

void AAPITimeGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	SendHTTPGet();
	
}

void AAPITimeGameModeBase::SendHTTPGet()
{

	SwitchOnCity();
	
	// Create the request
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();

	// Bind the response function to request
	Request->OnProcessRequestComplete().BindUObject(this, &AAPITimeGameModeBase::OnGetTimeResponse);
	// Setting the URL - Where to send the request
	Request->SetURL(CityURL);
	// Adding what type of request
	Request->SetVerb("GET");

	// Letting the server know what application sent the request 
	Request->SetHeader("User-Agent", "X-UnrealEngine-Agent");
	// Letting request know what response we are expecting
	Request->SetHeader("Content-Type","application/json");
	// Sending the request
	Request->ProcessRequest();
	
}

void AAPITimeGameModeBase::OnGetTimeResponse(FHttpRequestPtr Request, FHttpResponsePtr Response,
	bool bConnectedSuccessfully)
{
	// Creating the json object
	TSharedPtr<FJsonObject> JsonObject;
	// Checking if we are successful in our request (200 means the opposite of 404 basically)
	if (Response->GetResponseCode() == 200)
	{
		// Store the response in our response body
		const FString ResponseBody = Response->GetContentAsString();
		// Creating a reader for the response body
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseBody);

		
		// Check if we are successful in reading the json 
		if (FJsonSerializer::Deserialize(Reader, JsonObject))
		{
			// this is where we put the information on what to do with the data
			UKismetMathLibrary::DateTimeFromIsoString(*JsonObject->GetStringField("dateTime"), Time);
			BreakTime();
		}
	}
}

void AAPITimeGameModeBase::SwitchOnCity()
{
	CityURL = FString("https://timeapi.io/api/Time/current/zone?timeZone=");

	switch (City)
	{
	case ECity::EC_Tokyo:
		CityURL.Append("Asia/Tokyo");
		break;
	case ECity::EC_London:
		CityURL.Append("Europe/London");
		break;
	case ECity::EC_NewYork:
		CityURL.Append("America/New_York");
		break;
	default:
		break;
	}
}

void AAPITimeGameModeBase::BreakTime()
{
	int32 Year;
	int32 Month;
	int32 Day;
	int32 MilliSecond;

	// Break the time variable and store the data in individual variables
	UKismetMathLibrary::BreakDateTime(Time, Year, Month, Day,Hour, Minute, Second, MilliSecond);
}

void AAPITimeGameModeBase::SecondCounterCallback()
{
	
}

FText AAPITimeGameModeBase::GetCurrentTime()
{
	FString Hours;
	FString Minutes;
	FString Seconds;

	// handle hours
	if (Hour<10)
	{
		Hours = FString("0").Append(FString::FromInt(Hour));
	}
	else
	{
		Hours = FString::FromInt(Hour);
	}

	// handle minutes
	if (Minute<10)
	{
		Minutes = FString("0").Append(FString::FromInt(Minute));
	}
	else
	{
		Minutes = FString::FromInt(Minute);
	}

	// handle seconds
	if (Second<10)
	{
		Seconds = FString("0").Append(FString::FromInt(Second));
	}
	else
	{
		Seconds = FString::FromInt(Second);
	}

	FString ReturnString = Hours.Append(": ").Append(Minutes).Append(": ").Append(Seconds);
	
	return FText::FromString(ReturnString);
}
