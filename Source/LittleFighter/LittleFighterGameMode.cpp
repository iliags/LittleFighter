// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LittleFighterGameMode.h"
#include "LittleFighterCharacter.h"

ALittleFighterGameMode::ALittleFighterGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ALittleFighterCharacter::StaticClass();	
}
