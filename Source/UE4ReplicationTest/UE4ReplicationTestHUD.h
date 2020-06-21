// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UE4ReplicationTestHUD.generated.h"

UCLASS()
class AUE4ReplicationTestHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUE4ReplicationTestHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

