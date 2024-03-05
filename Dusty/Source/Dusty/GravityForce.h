// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GravityForce.generated.h"

UCLASS()
class DUSTY_API AGravityForce : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGravityForce();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	AActor* object;

	UPROPERTY(EditAnywhere)
	float mass;

	UPROPERTY(EditAnywhere)
	FVector force;
};
