// Fill out your copyright notice in the Description page of Project Settings.


#include "MagnetismPlanet.h"
#include "RealPlanet.h"
#include "PhysicsManager.h"

AMagnetismPlanet::AMagnetismPlanet()
{

}

void AMagnetismPlanet::BeginPlay()
{
	Super::BeginPlay();
	if (projectionPlanet != nullptr)
	{
		projectionPlanet->rotationSpeed = velocityFactor * 0.117f;

	}
}

void AMagnetismPlanet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float x = desiredRadius / distance.Size();

	if (projectionPlanet != nullptr)
	{
		projectionPlanet->distance = distance;

	}
	physicsSubsystem->SetMagnetism(x);
}

