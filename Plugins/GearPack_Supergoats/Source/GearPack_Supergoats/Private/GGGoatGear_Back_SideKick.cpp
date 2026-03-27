#include "GGGoatGear_Back_SideKick.h"

UGGGoatGear_Back_SideKick::UGGGoatGear_Back_SideKick(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KickCooldown = 0.00f;
    this->OverlapSphereRadius = 2.50f;
    this->LegAnimationAsset = NULL;
    this->KickImpulseDelay = 0.08f;
    this->KickUpAngle = 0.00f;
    this->KickForceScalar = 0.00f;
    this->CharacterForceScalar = 1.00f;
    this->VehicleForceScalar = 1.00f;
}

void UGGGoatGear_Back_SideKick::TraceForImpulse(int32 LegIndex) {
}

void UGGGoatGear_Back_SideKick::PlayLegAnimationServer_Implementation(int32 LegIndex) {
}

void UGGGoatGear_Back_SideKick::PlayLegAnimationMulticast_Implementation(int32 LegIndex) {
}


void UGGGoatGear_Back_SideKick::OnAppliedImpulseMulticast_Implementation(const TArray<AActor*>& HitActors, int32 LegIndex) {
}


void UGGGoatGear_Back_SideKick::ApplyImpulseServer_Implementation(const TArray<AActor*>& HitActors, FVector_NetQuantize10 Location, FVector_NetQuantize10 Direction, int32 LegIndex) {
}


