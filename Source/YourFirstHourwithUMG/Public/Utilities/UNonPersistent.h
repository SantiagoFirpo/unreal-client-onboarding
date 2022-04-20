#pragma once

#include "UNonPersistent.generated.h"

UINTERFACE()
class UNonPersistent : public UInterface
{
    GENERATED_BODY()
};

class YOURFIRSTHOURWITHUMG_API INonPersistent
{
    GENERATED_BODY()
public:
    virtual void InitializeData() = 0; 
};
