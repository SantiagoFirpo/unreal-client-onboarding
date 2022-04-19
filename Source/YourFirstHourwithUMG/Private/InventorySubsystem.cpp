#include "InventorySubsystem.h"

#include "SubsystemUtilities.h"

void UInventorySubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
}
UInventorySubsystem* UInventorySubsystem::GetInventorySubsystem(const UObject* WorldContextObject)
{
    return GetGameInstanceFromObject(WorldContextObject)->GetSubsystem<UInventorySubsystem>();
}
void UInventorySubsystem::SwitchWeapon(const EWeapon NewWeapon)
{
    CurrentWeapon = NewWeapon;
    if (OnWeaponChanged.IsBound())
    {
        OnWeaponChanged.Broadcast(NewWeapon);
    }
}
