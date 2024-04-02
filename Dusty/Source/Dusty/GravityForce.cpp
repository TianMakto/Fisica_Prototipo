// Fill out your copyright notice in the Description page of Project Settings.


#include "GravityForce.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Planet.h"
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
	; //Modify the mass to avoid so big values in the unreal editor
	myGameInstance = GetGameInstance()->GetSubsystem<UMyGameInstanceSubsystem>();
	////for (int i = 0; i < object.Num(); i++)
	////{
	////	FVector Distance = object[i]->GetActorLocation() - GetActorLocation(); //Get the distance between objects
	////	Distance.Normalize();
	////	float radius = mass / ((object[i]->velocityFactor / 100) * (object[i]->velocityFactor / 100));
	////	object[i]->desiredRadius = radius;

	////	object[i]->SetActorLocation(GetActorLocation() - (Distance * radius * 3));

	//}
	
}

// Called every frame
void AGravityForce::Tick(float DeltaTime)
{
	myGameInstance->SayHello();
	Super::Tick(DeltaTime);

	for (int i = 0; i < object.Num(); i++)
	{
		FVector Distance = object[i]->GetActorLocation() - GetActorLocation(); //Get the distance between objects
		float DistanceSize = Distance.Size();

		object[i]->distance = Distance;
		object[i]->velocity = FVector(Distance.Y, -Distance.X, Distance.Z);
		object[i]->velocity.Normalize();
		object[i]->velocity *= object[i]->velocityFactor;

		float totalMass = mass * object[i]->mass;
		FVector direction = Distance / Distance.Size();

		force = ((totalMass) / (Distance.Size() * Distance.Size())) * direction; //Gravity force formula

		//object[i]->mesh->AddForce(force * -100);
		UE_LOG(LogTemp, Warning, TEXT("%f"), object[i]->desiredRadius);
		UE_LOG(LogTemp, Warning, TEXT("%f"), Distance.Size());



		DrawDebugPoint(GetWorld(), object[i]->GetActorLocation(), 1.5f, FColor::Green, true);
		 
		
		//float radius = mass / ((object[i]->velocity.Size() / 100) * (object[i]->velocity.Size() / 100));

		//if ((DistanceSize - object[i]->desiredRadius) > 20)
		//{
		//	FVector newDistance = Distance;
		//	newDistance.Normalize();
		//	object[i]->SetActorLocation(object[i]->GetActorLocation() - (newDistance * 20));
		//	
		//}

		//object->SetActorLocation(object->GetActorLocation() - force * 1000.0f * DeltaTime); //Displacement of the object

	}
}

