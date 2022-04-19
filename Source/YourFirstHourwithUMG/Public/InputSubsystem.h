#pragma once

#include "CoreMinimal.h"
#include "InputSubsystem.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class YOURFIRSTHOURWITHUMG_API UInputSubsystem final : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    static UInputSubsystem* GetInputSubsystem(const UObject* WorldContextObject);
};

