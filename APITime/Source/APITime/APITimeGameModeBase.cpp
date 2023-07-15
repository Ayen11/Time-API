// Copyright Epic Games, Inc. All Rights Reserved.


#include "APITimeGameModeBase.h"

AAPITimeGameModeBase::AAPITimeGameModeBase()
{
	Http = &FHttpModule::Get();
}

void AAPITimeGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	 
}

void AAPITimeGameModeBase::SendHTTPGet()
{
	// Create the request
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();

	// Bind the response function to request
	Request->OnProcessRequestComplete().BindUObject(this, &AAPITimeGameModeBase::OnGetTimeResponse);
	// Setting the URL - Where to send the request
	Request->SetURL("");
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
	bool bConnectedSuccesfully)
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
		}
	}
}
