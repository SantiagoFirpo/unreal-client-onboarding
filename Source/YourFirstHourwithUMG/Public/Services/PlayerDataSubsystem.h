// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Utilities/UNonPersistent.h"
#include "PlayerDataSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAmmoChangeEvent, const int, NewValue);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthChangeEvent, const float, NewValue);

/**
 * 
 */
UCLASS()
class YOURFIRSTHOURWITHUMG_API UPlayerDataSubsystem final : public UGameInstanceSubsystem, public INonPersistent
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    static UPlayerDataSubsystem* GetPlayerDataSubsystem(const UObject* WorldContextObject);

    UPROPERTY(BlueprintReadOnly)
    int Ammo;

    UPROPERTY(BlueprintReadOnly)
    float Health;

    UPROPERTY(BlueprintAssignable)
    FHealthChangeEvent OnHealthChanged;

    UPROPERTY(BlueprintAssignable)
    FAmmoChangeEvent OnAmmoChanged;

    UPROPERTY(BlueprintReadOnly)
    int ProjectileAmount;


    UFUNCTION(BlueprintCallable)
    virtual void InitializeData() override;

    UFUNCTION(BlueprintCallable)
    void ChangeAmmo(const int Amount);

    UFUNCTION(BlueprintCallable)
    void ChangeHealth(const float Amount);
};
