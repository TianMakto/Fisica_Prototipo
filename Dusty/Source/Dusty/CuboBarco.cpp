// Fill out your copyright notice in the Description page of Project Settings.


#include "CuboBarco.h"

// Sets default values
ACuboBarco::ACuboBarco()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACuboBarco::BeginPlay()
{
	Super::BeginPlay();

	meshCubo = FindComponentByClass<UStaticMeshComponent>();

	DistanceToFront = GetActorScale().X * OriginDistanceToFront;
}

void ACuboBarco::AirResistanceFunction(float DeltaSeconds)
{
	FVector velocity = meshCubo->GetComponentVelocity();
	FVector airResistance = -velocity.GetSafeNormal()  * velocity.Size() * velocity.Size() * AirResistance * DeltaSeconds;

	/*GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString::Printf(TEXT("Velocity: %f, %f, %f"), velocity.X, velocity.Y, velocity.Z));
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString::Printf(TEXT("AirResistance: %f, %f, %f"), airResistance.X, airResistance.Y, airResistance.Z));*/

	DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + velocity, FColor::Purple, false, 1.f);
	DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + airResistance, FColor::Yellow, false, 1.f);
	meshCubo->AddForce(airResistance);	

	velocity = meshCubo->GetComponentVelocity();
	DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + velocity + FVector(0,0,10), FColor::Red, false, 1.f);
}

// Called every frame
void ACuboBarco::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AirResistanceFunction(DeltaTime);

}

// Called to bind functionality to input
void ACuboBarco::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ACuboBarco::Accelerate()
{
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString::Printf(TEXT("DistanceToFront: %f"), DistanceToFront));
	/*if (GetVelocity().Size() <= LowSpeed)
	{
		meshCubo->AddImpulse(-GetActorForwardVector() * ImpulseForce);
	}*/

	//DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + -GetActorRightVector() * 2000, FColor::Purple, false, 1.f);
	//DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 2000, FColor::Purple, false, 1.f);
	//DrawDebugLine(GetWorld(), GetActorLocation() + GetActorForwardVector() * DistanceToFront, GetActorLocation() + GetActorForwardVector() * DistanceToFront + GetActorUpVector() * 2000, FColor::Yellow, false, 1.f);

	meshCubo->AddForce(GetActorForwardVector() * force * GetWorld()->GetDeltaSeconds());


}

void ACuboBarco::Deccelerate()
{
	meshCubo->AddForce(-GetActorForwardVector() * force * GetWorld()->GetDeltaSeconds());

}

void ACuboBarco::Turn(bool right)
{
	if (right)
	{
		meshCubo->AddForceAtLocation(GetActorRightVector() * turnforce * GetWorld()->GetDeltaSeconds(), GetActorLocation() + GetActorForwardVector() * DistanceToFront);
	}
	else
	{
		meshCubo->AddForceAtLocation(-GetActorRightVector() * turnforce * GetWorld()->GetDeltaSeconds(), GetActorLocation() + GetActorForwardVector() * DistanceToFront);
	}
}

