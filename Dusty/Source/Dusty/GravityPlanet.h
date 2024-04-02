// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Planet.h"
#include "GravityPlanet.generated.h"

/**
 * 
 */
class ARealPlanet;

UCLASS()
class DUSTY_API AGravityPlanet : public APlanet
{
	GENERATED_BODY()

public:
	AGravityPlanet();
private:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;


	
};
