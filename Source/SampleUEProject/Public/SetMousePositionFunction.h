// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SetMousePositionFunction.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLEUEPROJECT_API USetMousePositionFunction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		
public:
	// Moves mouse to given XY position 
	UFUNCTION(BlueprintCallable, Category = "BlueprintHelpers")
	static void SetMousePosition(FVector2D position);
};
