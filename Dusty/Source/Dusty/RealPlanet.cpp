// Fill out your copyright notice in the Description page of Project Settings.


#include "RealPlanet.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "PhysicsManager.h"

// Sets default values
ARealPlanet::ARealPlanet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(scene);

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	mesh->SetupAttachment(scene);

	//rotation = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("Rotation"));
}

// Called when the game starts or when spawned
void ARealPlanet::BeginPlay()
{
	Super::BeginPlay();
	initialPos = mesh->GetRelativeLocation();

}

// Called every frame
void ARealPlanet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	mesh->SetRelativeLocation(FVector(0, 0, initialPos.Z * distance.Size() * 0.005f));
	FQuat newRot = FQuat(FRotator(0, 0, GetActorRotation().Roll + rotationSpeed * DeltaTime));
	SetActorRotation(newRot);
	//AddActorWorldRotation(newRot);
	
}

