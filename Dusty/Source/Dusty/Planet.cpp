// Fill out your copyright notice in the Description page of Project Settings.


#include "Planet.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "RealPlanet.h"
#include "PhysicsManager.h"

// Sets default values
APlanet::APlanet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	SetRootComponent(mesh);

}

// Called when the game starts or when spawned
void APlanet::BeginPlay()
{
	Super::BeginPlay();
	velocity *= velocityFactor;
	//projectionPlanet->rotationSpeed = velocityFactor * 0.117f;
	physicsSubsystem = GetGameInstance()->GetSubsystem<UPhysicsManager>();
	
}

// Called every frame
void APlanet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector newPos = GetActorLocation() + (velocity * DeltaTime);
	SetActorLocation(newPos);
}

