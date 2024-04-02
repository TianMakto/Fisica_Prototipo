// Fill out your copyright notice in the Description page of Project Settings.


#include "GravityPlanet.h"
#include "RealPlanet.h"
#include "PhysicsManager.h"

AGravityPlanet::AGravityPlanet()
{

}

void AGravityPlanet::BeginPlay()
{
	Super::BeginPlay();
	if (projectionPlanet != nullptr)
	{
		projectionPlanet->rotationSpeed = velocityFactor * 0.117f;

	}

}

void AGravityPlanet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float x = desiredRadius / distance.Size();
	projectionPlanet->distance = distance;
	physicsSubsystem->SetGravity(x);
}