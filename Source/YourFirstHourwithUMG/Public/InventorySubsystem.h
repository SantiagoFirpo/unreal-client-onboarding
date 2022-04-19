﻿#pragma once

#include "CoreMinimal.h"
#include "InventorySubsystem.generated.h"


UENUM(BlueprintType)
enum class EWeapon : uint8
{
    Pistol,
    Rifle
};

DECLARE_MULTICAST_DELEGATE_OneParam(FWeaponChange, EWeapon)

UCLASS()
class YOURFIRSTHOURWITHUMG_API UInventorySubsystem final : public UGameInstanceSubsystem
{
    GENERATED_BODY()
    
    EWeapon CurrentWeapon;
    TArray<EWeapon> WeaponInventory;

   
public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    static UInventorySubsystem* GetInventorySubsystem(const UObject* WorldContextObject);
    
    void SwitchWeapon(EWeapon NewWeapon);

    FWeaponChange OnWeaponChanged;
     
};