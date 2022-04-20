#include "Services/InputSubsystem.h"

#include "Services/InventorySubsystem.h"
#include "Utilities/SubsystemUtilities.h"
#include "Kismet/GameplayStatics.h"

// ReSharper disable once CppMemberFunctionMayBeConst
void UInputSubsystem::SwitchToInventorySlot1()
{
    _inventorySubsystem->SetInventorySlot(1);
}

// ReSharper disable once CppMemberFunctionMayBeConst
void UInputSubsystem::SwitchToInventorySlot2()
{
    _inventorySubsystem->SetInventorySlot(2);
}

void UInputSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    Collection.InitializeDependency(UInventorySubsystem::StaticClass());
    _inventorySubsystem = UInventorySubsystem::GetInventorySubsystem(this);
}

void UInputSubsystem::SetupInputBindings()
{
    _inputComponent = UGameplayStatics::GetPlayerController(this, 0)->InputComponent;
    _inputComponent->BindAction("InventorySlot1", IE_Pressed, this, &UInputSubsystem::SwitchToInventorySlot1);
    _inputComponent->BindAction("InventorySlot2", IE_Pressed, this, &UInputSubsystem::SwitchToInventorySlot2);
}

UInputSubsystem* UInputSubsystem::GetInputSubsystem(const UObject* WorldContextObject)
{
    return GetGameInstanceFromObject(WorldContextObject)->GetSubsystem<UInputSubsystem>();
}
