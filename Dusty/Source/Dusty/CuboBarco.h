// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CuboBarco.generated.h"

UCLASS()
class DUSTY_API ACuboBarco : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACuboBarco();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
		float force;
	UPROPERTY(EditAnywhere)
		float turnforce;
	UPROPERTY(EditAnywhere)
		float LowSpeed;
	UPROPERTY(EditAnywhere)
		float ImpulseForce = 500;

	UPROPERTY(EditAnywhere)
		float AirResistance = 0.1;

	UStaticMeshComponent* meshCubo;

	const float OriginDistanceToFront = 355;

	float DistanceToFront;

	void AirResistanceFunction(float DeltaSeconds);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UFUNCTION(BlueprintCallable)
		void Accelerate();

	UFUNCTION(BlueprintCallable)
		void Deccelerate();

	UFUNCTION(BlueprintCallable)
		void Turn(bool right);
};
