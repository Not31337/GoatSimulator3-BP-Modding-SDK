#include "GGGoatGear_Skel_TheCuber.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Skel_TheCuber::UGGGoatGear_Skel_TheCuber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CompactedCubeClass = NULL;
    this->TimeToCatchTarget = 0.40f;
    this->TimeToConvertTarget = 0.75f;
    this->MontageCatchActor = NULL;
    this->MontageReleaseCube = NULL;
    this->MontageNoValidTarget = NULL;
    this->CubeLaunchImpulse = 500.00f;
    this->TimeToScaleUpCube = 0.20f;
    this->OwningAbility = NULL;
}

void UGGGoatGear_Skel_TheCuber::ServerPlayNoValidTargetMontage_Implementation() {
}

void UGGGoatGear_Skel_TheCuber::OnRep_CurrentState(const FGGTheCuberReplicatedVariables& OldValue) {
}

void UGGGoatGear_Skel_TheCuber::MulticastReleaseTarget_Implementation(AActor* Target, FVector Location, FGGReleaseOptions Options) {
}

void UGGGoatGear_Skel_TheCuber::MulticastPlayNoValidTargetMontage_Implementation() {
}

void UGGGoatGear_Skel_TheCuber::MulticastCatchTarget_Implementation(AActor* Target, FGGCatchOptions Options) {
}

void UGGGoatGear_Skel_TheCuber::AnimNotify_DoorsOpen() {
}

void UGGGoatGear_Skel_TheCuber::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Skel_TheCuber, RepVariables);
}


