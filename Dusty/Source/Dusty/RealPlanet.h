// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RealPlanet.generated.h"

class URotatingMovementComponent;
class UPhysicsManager;

UCLASS()
class DUSTY_API ARealPlanet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARealPlanet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	USceneComponent* scene;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere)
	FVector distance;

	UPROPERTY(EDitAnywhere)
	FVector initialPos;

	UPROPERTY(EditAnywhere)
	float rotationSpeed;

	UPhysicsManager* PhysicsManager;

};
