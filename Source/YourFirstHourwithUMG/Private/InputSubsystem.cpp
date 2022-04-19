#include "InputSubsystem.h"

#include "SubsystemUtilities.h"

void UInputSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
}
UInputSubsystem* UInputSubsystem::GetInputSubsystem(const UObject* WorldContextObject)
{
    return GetGameInstanceFromObject(WorldContextObject)->GetSubsystem<UInputSubsystem>();
}
