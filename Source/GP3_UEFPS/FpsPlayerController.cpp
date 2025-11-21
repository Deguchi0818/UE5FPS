// Fill out your copyright notice in the Description page of Project Settings.


#include "FpsPlayerController.h"
#include "GameStartGameState.h"


void AFpsPlayerController::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);

    AGameStartGameState* GS = GetWorld()->GetGameState<AGameStartGameState>();
    if (!GS)
        return;

    const bool bStarted = GS->isGameStarted();

    // カウントダウン中は一切動かさない
    SetIgnoreMoveInput(!bStarted);
    SetIgnoreLookInput(!bStarted);
}
