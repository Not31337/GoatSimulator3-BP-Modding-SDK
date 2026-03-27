#include "GGGoatGear_Scene_Horns_WandHorns.h"

UGGGoatGear_Scene_Horns_WandHorns::UGGGoatGear_Scene_Horns_WandHorns(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorRaiseSpeed = 2.00f;
    this->ActorWanderSpeed = 7.00f;
}

void UGGGoatGear_Scene_Horns_WandHorns::OnLocalGoatJumpPressed(AGGGoat* InstigatingGoat) {
}

void UGGGoatGear_Scene_Horns_WandHorns::OnLaunchCancelledMulticast_Implementation(const TArray<AActor*>& GrabbedActors) {
}


void UGGGoatGear_Scene_Horns_WandHorns::OnHoldToLaunchStartedMulticast_Implementation(const TArray<AActor*>& GrabbedActors) {
}


void UGGGoatGear_Scene_Horns_WandHorns::OnGrabbedActorMulticast_Implementation(bool bInitialActor, AActor* GrabbedActor) {
}


void UGGGoatGear_Scene_Horns_WandHorns::OnFailedToGrabActorMulticast_Implementation() {
}


void UGGGoatGear_Scene_Horns_WandHorns::OnEndAbilityMulticast_Implementation(bool bWasCancelled, const TArray<AActor*>& GrabbedActors) {
}



