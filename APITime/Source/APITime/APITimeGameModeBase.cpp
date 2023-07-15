// Copyright Epic Games, Inc. All Rights Reserved.


#include "APITimeGameModeBase.h"

AAPITimeGameModeBase::AAPITimeGameModeBase()
{
}

void AAPITimeGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void AAPITimeGameModeBase::SendHTTPGet()
{
}

void AAPITimeGameModeBase::OnGetTimeResponse(FHttpRequestPtr Request, FHttpResponsePtr Response,
                                             bool bConnectedSuccessfully)
{
}
