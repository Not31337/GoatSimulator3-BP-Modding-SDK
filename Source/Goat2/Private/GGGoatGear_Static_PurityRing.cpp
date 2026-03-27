#include "GGGoatGear_Static_PurityRing.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_PurityRing::UGGGoatGear_Static_PurityRing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInvisibleEffectActive = false;
    this->TargetComponent = NULL;
}

void UGGGoatGear_Static_PurityRing::OnRep_IsInvisibleEffectActive() {
}

void UGGGoatGear_Static_PurityRing::AnimateRing(USceneComponent* Target, FVector TargetLocation, FRotator TargetRotation, FVector StartLocation, FRotator StartRotation, float AnimationTime) {
}

void UGGGoatGear_Static_PurityRing::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_PurityRing, bIsInvisibleEffectActive);
}


