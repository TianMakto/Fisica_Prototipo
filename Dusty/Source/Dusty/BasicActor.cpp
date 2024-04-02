// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicActor.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicsManager.h"

// Sets default values
ABasicActor::ABasicActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	SetRootComponent(mesh);

}

// Called when the game starts or when spawned
void ABasicActor::BeginPlay()
{
	Super::BeginPlay();
	//physicsManager = Cast<UPhysicsManager>(UGameplayStatics::GetGameInstance(GetWorld()));
	physicsManager = GetGameInstance()->GetSubsystem<UPhysicsManager>();
}

// Called every frame
void ABasicActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	mesh->AddForce(GetActorUpVector() * physicsManager->GetGravity() * 1000);
	UE_LOG(LogTemp, Warning, TEXT("Gravity: %f"), physicsManager->GetGravity())

}

