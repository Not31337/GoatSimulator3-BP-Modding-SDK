#include "GGGearAbility_ChristmasLights.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_ChristmasLights::UGGGearAbility_ChristmasLights() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->GearMuzzleSocket = TEXT("MuzzleSocket");
    this->SplineClass = NULL;
    this->MaxDistanceBeforeBreaking = 20000.00f;
    this->MaxSplineCount = 0;
    this->StartPointWallOffset = 20.00f;
    this->EndPointsWallOffset = 40.00f;
    this->CableWheelCircumference = 30.00f;
    this->ReticleParticleTemplate = NULL;
    this->RemoveSplineReticleParticleTemplate = NULL;
    this->TraceDistance = 1000.00f;
    this->TraceChannel = ECC_WorldStatic;
    this->MaxDotProductForAligningReticleToPlayer = 0.50f;
    this->ReticlePlacementDistanceAboveSurface = 5.00f;
    this->CurrentSplineActor = NULL;
    this->ReticleEmitterActor = NULL;
    this->RemoveSplineReticleEmitterActor = NULL;
    this->GearMeshComp = NULL;
}

void UGGGearAbility_ChristmasLights::ServerPlaceSpline_Implementation(FVector InStartPosition, FVector SurfaceNormal) {
}

void UGGGearAbility_ChristmasLights::ServerPlaceCurrentSplineEndPosition_Implementation(FVector EndPosition, FVector SurfaceNormal) {
}

void UGGGearAbility_ChristmasLights::ServerDestroySpline_Implementation(AGGChristmasLightsSpline* TargetSpline) {
}

void UGGGearAbility_ChristmasLights::ServerDestroyCurrentSpline_Implementation() {
}

FTransform UGGGearAbility_ChristmasLights::GetGearMuzzleTransform() const {
    return FTransform{};
}

bool UGGGearAbility_ChristmasLights::DoTargetTrace(FHitResult& OutResult) const {
    return false;
}

void UGGGearAbility_ChristmasLights::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_ChristmasLights, CurrentSplineActor);
}


