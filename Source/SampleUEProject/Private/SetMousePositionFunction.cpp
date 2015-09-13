// Fill out your copyright notice in the Description page of Project Settings.

#include "SampleUEProject.h"
#include "SetMousePositionFunction.h"


void USetMousePositionFunction::SetMousePosition(FVector2D position)
{
	auto playerController = GEngine->GameViewport->GetWorld()->GetFirstPlayerController();
	auto viewport = CastChecked<ULocalPlayer>(playerController->Player)->ViewportClient->Viewport;
	viewport->SetMouse(position.X, position.Y);
	return;
}
