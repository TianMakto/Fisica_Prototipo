// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"

void UMyGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Error, TEXT("MyGameInstanceSubsystem Initialized"));
}

void UMyGameInstanceSubsystem::SayHello()
{
	UE_LOG(LogTemp, Error, TEXT("Hello"));
}

void UMyGameInstanceSubsystem::Deinitialize()
{
	UE_LOG(LogTemp, Error, TEXT("MyGameInstanceSubsystem Deinitialized"));
}
