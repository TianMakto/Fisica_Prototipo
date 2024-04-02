// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Planet.h"
#include "MagnetismPlanet.generated.h"

/**
 * 
 */
UCLASS()
class DUSTY_API AMagnetismPlanet : public APlanet
{
	GENERATED_BODY()
public:
	AMagnetismPlanet();

private:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	
};
