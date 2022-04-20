// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/WeaponInventory.h"

#include "Services/InputSubsystem.h"
#include "GameFramework/PlayerInput.h"

// Sets default values for this component's properties
UWeaponInventory::UWeaponInventory()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
}

void UWeaponInventory::BeginPlay()
{
    Super::BeginPlay();
    UInputSubsystem::GetInputSubsystem(this)->SetupInputBindings();
}
