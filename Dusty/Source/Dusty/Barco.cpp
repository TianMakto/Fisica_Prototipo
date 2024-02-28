// Fill out your copyright notice in the Description page of Project Settings.


#include "Barco.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABarco::ABarco()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	meshBarco = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Barco"));
	meshVela = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Vela"));

	SetRootComponent(meshBarco);
	meshVela->SetupAttachment(meshBarco);
}

// Called when the game starts or when spawned
void ABarco::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABarco::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABarco::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


}

void ABarco::Accelerate()
{
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString::Printf(TEXT("Velocity: %f"), GetVelocity().Size() * GetWorld()->GetDeltaSeconds()));
	if (GetVelocity().Size() <= LowSpeed)
	{
		meshBarco->AddImpulse(-GetActorRightVector() * ImpulseForce);
	}
	FVector CenterPoint = GetActorLocation() + GetActorForwardVector() * 150;
	
	//DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + -GetActorRightVector() * 2000, FColor::Purple, false, 1.f);
	DrawDebugLine(GetWorld(), CenterPoint, CenterPoint + -GetActorRightVector() * 2000, FColor::Purple, false, 1.f);
	DrawDebugLine(GetWorld(), CenterPoint, CenterPoint + GetActorUpVector()* 2000, FColor::Yellow, false, 1.f);

	meshBarco->AddForce(-GetActorRightVector() * force * GetWorld()->GetDeltaSeconds());


}
//150
void ABarco::Deccelerate()
{
	meshBarco->AddForce(meshBarco->GetRightVector() * force * GetWorld()->GetDeltaSeconds());

}

void ABarco::Turn(bool right)
{
	if (right)
	{
		meshBarco->AddForceAtLocation(-meshBarco->GetForwardVector() * turnforce * GetWorld()->GetDeltaSeconds(), GetActorLocation() + meshBarco->GetRightVector() * 50);
	}
	else
	{
		meshBarco->AddForceAtLocation(meshBarco->GetForwardVector() * turnforce * GetWorld()->GetDeltaSeconds(), GetActorLocation() + meshBarco->GetRightVector() * 50);
	}
}

