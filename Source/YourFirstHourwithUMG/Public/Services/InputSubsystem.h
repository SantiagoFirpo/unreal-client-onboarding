#pragma once

#include "CoreMinimal.h"
#include "InventorySubsystem.h"
#include "InputSubsystem.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class YOURFIRSTHOURWITHUMG_API UInputSubsystem final : public UGameInstanceSubsystem
{
    GENERATED_BODY()

    UPROPERTY()
    UInputComponent* _inputComponent;

    UPROPERTY()
    UInventorySubsystem* _inventorySubsystem;

public:
    void SwitchToInventorySlot1();
    void SwitchToInventorySlot2();
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    void SetupInputBindings();

    static UInputSubsystem* GetInputSubsystem(const UObject* WorldContextObject);
};
