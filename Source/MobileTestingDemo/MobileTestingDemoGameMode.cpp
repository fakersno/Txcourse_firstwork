// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobileTestingDemoGameMode.h"
#include "MobileTestingDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMobileTestingDemoGameMode::AMobileTestingDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
