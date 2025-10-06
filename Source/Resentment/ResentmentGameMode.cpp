// Copyright Epic Games, Inc. All Rights Reserved.

#include "ResentmentGameMode.h"
#include "ResentmentCharacter.h"
#include "UObject/ConstructorHelpers.h"

AResentmentGameMode::AResentmentGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
