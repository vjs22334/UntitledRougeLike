// Copyright Epic Games, Inc. All Rights Reserved.

#include "UntitledRougelikeGameMode.h"
#include "UntitledRougelikeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUntitledRougelikeGameMode::AUntitledRougelikeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
