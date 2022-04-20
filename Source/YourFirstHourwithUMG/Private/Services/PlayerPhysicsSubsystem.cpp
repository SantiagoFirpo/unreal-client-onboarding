#include "Services/PlayerPhysicsSubsystem.h"

#include "Utilities/SubsystemUtilities.h"


void UPlayerPhysicsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    _physicsSettings = GetDefault<UPlayerPhysicsSettings>();
}

UPlayerPhysicsSubsystem* UPlayerPhysicsSubsystem::GetPlayerPhysicsSubsystem(const UObject* WorldContextObject)
{
    return GetGameInstanceFromObject(WorldContextObject)->GetSubsystem<UPlayerPhysicsSubsystem>();
}

float UPlayerPhysicsSubsystem::GetMoveSpeed() const
{
    return _physicsSettings->GetMoveSpeed();
}

float UPlayerPhysicsSubsystem::GetJumpVelocity() const
{
    return _physicsSettings->GetJumpForce();
}

float UPlayerPhysicsSubsystem::GetProjectileSpeed() const
{
    return _physicsSettings->GetProjectileSpeed();
}
