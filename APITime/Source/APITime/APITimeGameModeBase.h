// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Http.h"
#include "APITimeGameModeBase.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ECity : uint8
{
	EC_Tokyo    UMETA(DisplayName = "Tokyo"),
	EC_London   UMETA(DisplayName = "London"),
	EC_NewYork  UMETA(DisplayName = "NewYork"),
	EC_Default  UMETA(DisplayName = "Default"),
};

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
	void OnGetTimeResponse(FHttpRequestPtr Request,FHttpResponsePtr Response, bool bConnectedSuccessfully);

	UFUNCTION()
	void SwitchOnCity();

	void BreakTime();

	void SecondCounterCallback();
	
private:

	FHttpModule* Http;

	ECity City;

	FString CityURL;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= Time, meta=(AllowPrivateAccess))
	FDateTime Time;

	int32 Hour;
	int32 Minute;
	int32 Second;

	FTimerHandle SecondCounter;
	float SecondCountFloat;
	
public:

	UFUNCTION(BlueprintCallable)
	FText GetCurrentTime();

	UFUNCTION(BlueprintCallable)
	void SetCurrentCity(ECity CurrentCity);
	
};
