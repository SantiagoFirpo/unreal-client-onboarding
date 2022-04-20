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
    float _moveSpeed;

    UPROPERTY(Config, EditAnywhere, Category="Movement")
    float _jumpVelocity;

    UPROPERTY(Config, EditAnywhere, Category="Combat")
    float _projectileSpeed;

public:
    UPlayerPhysicsSettings()
    {
        CategoryName = "Game";
    }

    FORCEINLINE float GetMoveSpeed() const
    {
        return _moveSpeed;
    }

    FORCEINLINE float GetJumpForce() const
    {
        return _jumpVelocity;
    }

    FORCEINLINE float GetProjectileSpeed() const
    {
        return _projectileSpeed;
    }
};
