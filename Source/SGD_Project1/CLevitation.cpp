// Fill out your copyright notice in the Description page of Project Settings.

/*
#include "CLevitation.h"

ACLevitation::ACLevitation()
{

}

void CLevitation::CLevitation()
{
	Super::BeginPlay();
	UE_LOG(LogActor, Warning, TEXT("test message"));

}

void ACLevitation::~CLevitation()
{
	Super::Tick(DeltaTime);

	//Gets the location of this actor in the world and stores it in the finalPosition variable
	FVector finalPosition = this->GetActorLocation();

	//Adds to the position in Z the result of speed multiplied by deltaTime
	finalPosition.Z = finalPosition.Z + (DeltaTime * speed);

	//Sets the resulting vector as the new position for the actor
	this->SetActorLocation(finalPosition);
}
*/