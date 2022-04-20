// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/WeaponInventory.h"

#include "Services/InputSubsystem.h"
#include "GameFramework/PlayerInput.h"

UWeaponInventory::UWeaponInventory()
{
    
}

void UWeaponInventory::BeginPlay()
{
    Super::BeginPlay();
    UInputSubsystem::GetInputSubsystem(this)->SetupInputBindings();
}
