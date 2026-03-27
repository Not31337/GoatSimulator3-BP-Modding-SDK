#include "GGMicroEventBase.h"

AGGMicroEventBase::AGGMicroEventBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CompletionRadius = 0;
    this->MicroEventIdentifier = TEXT("not_set");
}

void AGGMicroEventBase::OnEventCompleted_Implementation(AGGPlayerController* CompletingPlayer) {
}

void AGGMicroEventBase::CompleteEventForPlayer(AGGPlayerController* CompletingPlayer) {
}

void AGGMicroEventBase::CompleteEvent(AGGPlayerController* CompletingPlayer) {
}


