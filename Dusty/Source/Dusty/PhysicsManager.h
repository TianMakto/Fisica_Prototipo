// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PhysicsManager.generated.h"


/**
 * 
 */
UCLASS()
class DUSTY_API UPhysicsManager : public UGameInstanceSubsystem
{
   GENERATED_BODY()
public:
    // Begin USubsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    // End USubsystem

    void IncrementResourceStat();
    void SetGravity(float _gravityFactor);

    float GetGravity();

private:
    // All my variables
    UPROPERTY(EditAnywhere)
    int num;

    float defaultGravity;
    float gravity;
};
