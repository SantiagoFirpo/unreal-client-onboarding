// Fill out your copyright notice in the Description page of Project Settings.


#include "Services/PlayerDataSubsystem.h"

#include "Utilities/SubsystemUtilities.h"

void UPlayerDataSubsystem::InitializeData()
{
    Ammo = 20;
    Health = 100.0f;
    ProjectileAmount = 1;
}

UPlayerDataSubsystem* UPlayerDataSubsystem::GetPlayerDataSubsystem(const UObject* WorldContextObject)
{
    return GetGameInstanceFromObject(WorldContextObject)->GetSubsystem<UPlayerDataSubsystem>();
}

void UPlayerDataSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    InitializeData();
}

void UPlayerDataSubsystem::ChangeAmmo(const int Amount)
{
    Ammo += Amount;
    if (OnAmmoChanged.IsBound())
    {
        OnAmmoChanged.Broadcast(Ammo);
    }
}

void UPlayerDataSubsystem::ChangeHealth(const float Amount)
{
    Health += Amount;
    if (OnHealthChanged.IsBound())
    {
        OnHealthChanged.Broadcast(Health);
    }
}
