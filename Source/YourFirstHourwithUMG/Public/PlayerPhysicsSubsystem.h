// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerPhysicsSettings.h"
#include "PlayerPhysicsSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class YOURFIRSTHOURWITHUMG_API UPlayerPhysicsSubsystem final : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
  virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    static UPlayerPhysicsSubsystem* GetPlayerPhysicsSubsystem(const UObject* WorldContextObject);

    UFUNCTION(BlueprintPure)
    float GetMoveSpeed() const;

    UFUNCTION(BlueprintPure)
    float GetJumpVelocity() const;

    UFUNCTION(BlueprintPure)
    float GetProjectileSpeed() const;

private:
    UPROPERTY()
    const UPlayerPhysicsSettings* PhysicsSettings = nullptr;
};
