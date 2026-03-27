#include "GGLeashComponent2.h"
#include "Net/UnrealNetwork.h"

UGGLeashComponent2::UGGLeashComponent2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableStiffness = true;
    this->bSkipCableUpdateWhenNotVisible = true;
    this->bSkipCableUpdateWhenNotOwnerRecentlyRendered = true;
    this->bEnableCollision = true;
    //this->bClampCableDistance = true;
    //this->bClampFromLastParticle = true;
    this->CharacterAttachBone = TEXT("Neck");
    this->InstigatorAttachSocket = TEXT("MouthSocket");
    this->DistanceThresholdForWalking = 200.00f;
    this->DistanceThresholdForSprinting = 400.00f;
    this->RagdollDistance = 600.00f;
    this->Instigator = NULL;
    this->PhysicsConstraint = NULL;
}

void UGGLeashComponent2::OnRep_Instigator() {
}

void UGGLeashComponent2::OnNPCPooled(AGGNPC* NPC, bool WasPooled) {
}

void UGGLeashComponent2::OnCharacterUnRagdolled(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGLeashComponent2::OnCharacterTeleported(AGGCharacter* Character, const FTransform& OldTransform) {
}

void UGGLeashComponent2::OnCharacterRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGLeashComponent2::OnCharacterEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGLeashComponent2::OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}

void UGGLeashComponent2::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGLeashComponent2, Instigator);
}


