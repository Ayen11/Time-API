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
	TSharedPtr<FJsonObject> JsonObject;
	if (Response->GetResponseCode() == 200)
	{
		const FString ResponseBody = Response->GetContentAsString();
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseBody);
	}
}
