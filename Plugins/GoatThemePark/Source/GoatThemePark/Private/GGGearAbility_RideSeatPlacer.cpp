#include "GGGearAbility_RideSeatPlacer.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_RideSeatPlacer::UGGGearAbility_RideSeatPlacer() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bUseHeadbuttForAbility = true;
    this->bManuallyCompleteGearTutorial = true;
    this->RideSeatClass = NULL;
    this->SeatBackAttachSocket = TEXT("Back Attach Socket");
    this->MaterialValidLocation = NULL;
    this->MaterialInvalidLocation = NULL;
    this->MaterialRemoveExistingSeat = NULL;
    this->AnimationDuration = 0.50f;
    this->AnimationEasingFunction = EEasingFunc::EaseOut;
    this->PreviewActor = NULL;
    this->HighlightedSeat = NULL;
}

void UGGGearAbility_RideSeatPlacer::ServerSpawnSeat_Implementation(UPrimitiveComponent* AttachComponent, FName AttachSocket, FTransform AttachTransform, int32 SeatIndex, UMaterialInterface* SeatMaterial) {
}

void UGGGearAbility_RideSeatPlacer::ServerDestroySpawnedSeat_Implementation(AGGRideSeat* Seat) {
}

void UGGGearAbility_RideSeatPlacer::OnAttachNPCPooledOrMoved(AGGNPC* NPC, bool WasPooled) {
}

void UGGGearAbility_RideSeatPlacer::OnAttachedActorDestroyed(AActor* DestroyedActor) {
}

void UGGGearAbility_RideSeatPlacer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_RideSeatPlacer, SpawnedSeats);
}


