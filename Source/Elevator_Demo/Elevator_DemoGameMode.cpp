// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elevator_DemoGameMode.h"
#include "Elevator_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AElevator_DemoGameMode::AElevator_DemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
