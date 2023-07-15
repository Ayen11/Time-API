// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Http.h"
#include "APITimeGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class APITIME_API AAPITimeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	AAPITimeGameModeBase();
	
protected:
	
	// called when the game starts or when spawned
	virtual void BeginPlay() override; 

	//used to send the HTTP request
	UFUNCTION()
	void SendHTTPGet();

	//handle the HTTP request
	UFUNCTION()
	void OnGetTimeResponse(FHttpRequestPtr Request,FHttpResponsePtr Response, bool bConnectedSuccesfully);
	
private:

	 FHttpModule* Http;

	
public:
	
	
};
