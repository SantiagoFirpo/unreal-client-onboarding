#pragma once
#include "CoreMinimal.h"

FORCEINLINE UGameInstance* GetGameInstanceFromObject(const UObject* WorldContextObject)
{
    return WorldContextObject->GetWorld()->GetGameInstance();
}
