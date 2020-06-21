// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4ReplicationTestGameMode.h"
#include "UE4ReplicationTestHUD.h"
#include "UE4ReplicationTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4ReplicationTestGameMode::AUE4ReplicationTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE4ReplicationTestHUD::StaticClass();
}
