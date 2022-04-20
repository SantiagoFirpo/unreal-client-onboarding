#pragma once

#include "CoreMinimal.h"
#include "Utilities/UNonPersistent.h"
#include "InventorySubsystem.generated.h"


UENUM(BlueprintType)
enum class EWeapon : uint8
{
    Pistol,
    Rifle
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponChange, EWeapon, NewWeapon);

UCLASS()
class YOURFIRSTHOURWITHUMG_API UInventorySubsystem final : public UGameInstanceSubsystem, public INonPersistent
{
    GENERATED_BODY()

    UPROPERTY()
    EWeapon _currentWeapon;

    UPROPERTY()
    TArray<EWeapon> _weaponInventory;

public:
    UFUNCTION(BlueprintCallable)
    virtual void InitializeData() override;
    
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    
    void SetInventorySlot(int SlotIndex);
    static UInventorySubsystem* GetInventorySubsystem(const UObject* WorldContextObject);
    void SwitchWeapon(EWeapon NewWeapon);

    UFUNCTION(BlueprintPure)
    EWeapon GetCurrentWeapon() const;

    UFUNCTION(BlueprintCallable)
    void AddWeaponToInventory(EWeapon NewWeapon);

    UPROPERTY(BlueprintAssignable)
    FWeaponChange OnWeaponChanged;
};
