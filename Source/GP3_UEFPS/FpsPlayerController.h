// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FpsPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GP3_UEFPS_API AFpsPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void Tick(float deltaSeconds) override;
};
