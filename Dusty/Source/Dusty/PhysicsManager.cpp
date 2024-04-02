// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicsManager.h"

void UPhysicsManager::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("Initialize"));
	num = 0;
	defaultGravity = -980.0f;
	defaultMagnetism = 1500.0f;
	gravity = defaultGravity;
}

void UPhysicsManager::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("Deinitalize"));
}

void UPhysicsManager::IncrementResourceStat()
{
	num++;
}

void UPhysicsManager::SetGravity(float _gravityFactor)
{
	gravity = defaultGravity * _gravityFactor;
	UE_LOG(LogTemp, Warning, TEXT("Gravity: %f"), gravity);
}

void UPhysicsManager::SetMagnetism(float _magnetism)
{
	magnetismForce = defaultMagnetism * _magnetism;
	UE_LOG(LogTemp, Warning, TEXT("Magnetism: %f"), magnetismForce);
}

float UPhysicsManager::GetGravity()
{
	return gravity;
}




