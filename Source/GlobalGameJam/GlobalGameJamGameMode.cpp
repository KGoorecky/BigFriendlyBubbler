// Copyright Epic Games, Inc. All Rights Reserved.

#include "GlobalGameJamGameMode.h"
#include "GlobalGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGlobalGameJamGameMode::AGlobalGameJamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
