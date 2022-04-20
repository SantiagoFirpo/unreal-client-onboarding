#include "Services/InventorySubsystem.h"

#include "Services/PlayerDataSubsystem.h"
#include "Utilities/SubsystemUtilities.h"

void UInventorySubsystem::InitializeData()
{
    _weaponInventory = {EWeapon::Pistol};
    _currentWeapon = _weaponInventory[0];
}

void UInventorySubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    InitializeData();
}

void UInventorySubsystem::SetInventorySlot(const int SlotIndex)
{
    const int index = SlotIndex - 1;
    if (!_weaponInventory.IsValidIndex(index)) return;
    SwitchWeapon(_weaponInventory[index]);
    UE_LOG(LogTemp, Display, TEXT("Accessing Inventory Slot %d}"), SlotIndex)
}

UInventorySubsystem* UInventorySubsystem::GetInventorySubsystem(const UObject* WorldContextObject)
{
    return GetGameInstanceFromObject(WorldContextObject)->GetSubsystem<UInventorySubsystem>();
}

void UInventorySubsystem::SwitchWeapon(const EWeapon NewWeapon)
{
    UPlayerDataSubsystem* playerDataSubsystem = GetGameInstance()->GetSubsystem<UPlayerDataSubsystem>();
    switch (NewWeapon)
    {
    case EWeapon::Pistol:
    {
        UE_LOG(LogTemp, Display, TEXT("Accessing Pistol "))
        playerDataSubsystem->ProjectileAmount = 1;
        break;
    }
    case EWeapon::Rifle:
    {
        UE_LOG(LogTemp, Display, TEXT("Accessing Rifle"))
        playerDataSubsystem->ProjectileAmount = 12;
        break;
    }
    default: break;
    }
    _currentWeapon = NewWeapon;
    if (OnWeaponChanged.IsBound())
    {
        OnWeaponChanged.Broadcast(NewWeapon);
    }
}

EWeapon UInventorySubsystem::GetCurrentWeapon() const
{
    return _currentWeapon;
}

void UInventorySubsystem::AddWeaponToInventory(const EWeapon NewWeapon)
{
    _weaponInventory.Add(NewWeapon);
}
