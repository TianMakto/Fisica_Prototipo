// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Barco.generated.h"

UCLASS()
class DUSTY_API ABarco : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABarco();

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
		class UStaticMeshComponent* meshBarco;
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* meshVela;

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
