// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerDataSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class YOURFIRSTHOURWITHUMG_API UPlayerDataSubsystem final : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
	public:
		virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	
		UPROPERTY(BlueprintReadOnly)
		int Ammo;
	
		UPROPERTY(BlueprintReadOnly)
		float Health;

	
		UFUNCTION(BlueprintCallable)
		void InitializeData();
	
		UFUNCTION(BlueprintCallable)
		void ChangeAmmo(const int Amount);
	
		UFUNCTION(BlueprintCallable)
		void ChangeHealth(const float Amount);
	
		static WithinClass* GetGameInstanceFromObject(const UObject* WorldContextObject);
	
		UFUNCTION(BlueprintCallable)
		// ReSharper disable once CppUEBlueprintCallableFunctionUnused
		static UPlayerDataSubsystem* GetPlayerDataSubsystem(UObject* WorldContextObject);
};
