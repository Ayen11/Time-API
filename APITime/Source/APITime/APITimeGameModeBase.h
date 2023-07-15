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

	virtual void BeginPlay() override;
	
private:

	UFUNCTION()
	void SendHTTPGet();

	void OnGetTimeResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
	
public:
	
};
