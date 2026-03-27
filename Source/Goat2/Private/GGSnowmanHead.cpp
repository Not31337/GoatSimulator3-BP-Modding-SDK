#include "GGSnowmanHead.h"
#include "Net/UnrealNetwork.h"

AGGSnowmanHead::AGGSnowmanHead(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NPCForcedRagdollDuration = 2.00f;
    this->bIsAttachedActorFrozen = false;
}

void AGGSnowmanHead::OnRep_IsAttachedActorFrozen() {
}

void AGGSnowmanHead::OnAttachedNPCUnRagdolled(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGSnowmanHead::OnAttachedNPCPooled(AGGNPC* NPC, bool WasPooled) {
}

void AGGSnowmanHead::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGSnowmanHead, bIsAttachedActorFrozen);
}


