// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Planet.generated.h"

class URotatingMovementComponent;
class ARealPlanet;
class UPhysicsManager;

UCLASS()
class DUSTY_API APlanet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlanet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	//Subsystems:
	UPhysicsManager* physicsSubsystem;
	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	int mass;

	UPROPERTY(EditANywhere)
	FVector velocity;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere)
	FVector distance;

	UPROPERTY(EditAnywhere)
	float velocityFactor;

	UPROPERTY(EditAnywhere)
	float desiredRadius;

	UPROPERTY(EditAnywhere)
	ARealPlanet* projectionPlanet;

	UPROPERTY(EditAnywhere)
	float minDistance;

	UPROPERTY(EditAnywhere)
	float maxDistance;


};
