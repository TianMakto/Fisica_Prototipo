// Fill out your copyright notice in the Description page of Project Settings.


#include "GravityForce.h"
//#include "Subsystems/GameInstanceSubsystem.h"
#include "MyGameInstanceSubsystem.h"

// Sets default values
AGravityForce::AGravityForce()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGravityForce::BeginPlay()
{
	Super::BeginPlay();
	mass *= 10e8; //Modify the mass to avoid so big values in the unreal editor
	myGameInstance = GetGameInstance()->GetSubsystem<UMyGameInstanceSubsystem>();
}

// Called every frame
void AGravityForce::Tick(float DeltaTime)
{
	myGameInstance->SayHello();
	Super::Tick(DeltaTime);
	FVector Distance = object->GetActorLocation() - GetActorLocation(); //Get the distance between objects
	//float earthMass = 5.972e24;
	//float moonMass = 7.349e22;
	float G = 6.67e-11; //Universal gravity const
	float totalMass = mass * 100000;
	FVector direction = Distance / Distance.Size();

	force = ((G * totalMass) / (Distance.Size() * Distance.Size())) * direction; //Gravity force formula

	object->SetActorLocation(object->GetActorLocation() - force * 1000.0f * DeltaTime); //Displacement of the object
}

