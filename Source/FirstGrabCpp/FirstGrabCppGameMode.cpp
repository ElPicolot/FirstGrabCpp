// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstGrabCppGameMode.h"
#include "FirstGrabCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstGrabCppGameMode::AFirstGrabCppGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
