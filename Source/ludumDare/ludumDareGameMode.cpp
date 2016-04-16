// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "ludumDare.h"
#include "ludumDareGameMode.h"
#include "ludumDareCharacter.h"

AludumDareGameMode::AludumDareGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = AludumDareCharacter::StaticClass();	
}
