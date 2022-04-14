// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerDataSubsystem.h"


void UPlayerDataSubsystem::InitializeData()
{
	Ammo = 20;
	Health = 100.0f;
}
void UPlayerDataSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	InitializeData();
}

void UPlayerDataSubsystem::ChangeAmmo(const int Amount)
{
	Ammo += Amount;
}

void UPlayerDataSubsystem::ChangeHealth(const float Amount)
{
	Health += Amount;
}

inline UPlayerDataSubsystem::WithinClass* UPlayerDataSubsystem::GetGameInstanceFromObject(const UObject* const WorldContextObject) 
{
	return WorldContextObject->GetWorld()->GetGameInstance();
}

UPlayerDataSubsystem* UPlayerDataSubsystem::GetPlayerDataSubsystem(UObject* WorldContextObject)
{
	return GetGameInstanceFromObject(WorldContextObject)->GetSubsystem<UPlayerDataSubsystem>();
}
