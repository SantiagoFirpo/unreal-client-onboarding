#include "PlayerPhysicsSubsystem.h"

#include "SubsystemUtilities.h"


void UPlayerPhysicsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    PhysicsSettings = GetDefault<UPlayerPhysicsSettings>();
}

UPlayerPhysicsSubsystem* UPlayerPhysicsSubsystem::GetPlayerPhysicsSubsystem(const UObject* WorldContextObject)
{
    return GetGameInstanceFromObject(WorldContextObject)->GetSubsystem<UPlayerPhysicsSubsystem>();
}
float UPlayerPhysicsSubsystem::GetMoveSpeed() const
{
    return PhysicsSettings->GetMoveSpeed();
}
float UPlayerPhysicsSubsystem::GetJumpVelocity() const
{
    return PhysicsSettings->GetJumpForce();
}
float UPlayerPhysicsSubsystem::GetProjectileSpeed() const
{
    return PhysicsSettings->GetProjectileSpeed();
}
