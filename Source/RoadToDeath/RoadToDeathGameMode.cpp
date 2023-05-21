// Copyright Epic Games, Inc. All Rights Reserved.

#include "RoadToDeathGameMode.h"
#include "RoadToDeathCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARoadToDeathGameMode::ARoadToDeathGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
