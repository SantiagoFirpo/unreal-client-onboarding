// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"

#include "PlayerPhysicsSettings.generated.h"


UCLASS(Config=GamePort, defaultConfig, meta=(DisplayName="Player Physics Settings"))
class YOURFIRSTHOURWITHUMG_API UPlayerPhysicsSettings final : public UDeveloperSettings
{
    GENERATED_BODY()

    UPROPERTY(Config, EditAnywhere, Category="Movement")
    float MoveSpeed;

    UPROPERTY(Config, EditAnywhere, Category="Movement")
    float JumpVelocity;

    UPROPERTY(Config, EditAnywhere, Category="Combat")
    float ProjectileSpeed;

public:
    UPlayerPhysicsSettings()
    {
        MoveSpeed = 100.0f;
        JumpVelocity = 100.0;
        ProjectileSpeed = 200.0f;
        CategoryName = "Game";
    }

    FORCEINLINE float GetMoveSpeed() const
    {
        return MoveSpeed;
    }

    FORCEINLINE float GetJumpForce() const
    {
        return JumpVelocity;
    }

    FORCEINLINE float GetProjectileSpeed() const
    {
        return ProjectileSpeed;
    }
};
