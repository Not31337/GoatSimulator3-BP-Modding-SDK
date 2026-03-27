#include "BTTask_GGSpawnActor.h"

UBTTask_GGSpawnActor::UBTTask_GGSpawnActor() {
    this->NodeName = TEXT("Spawn Actor");
    this->ActorSpawnType = EActorSpawnType::AST_Default;
    this->bUseSoftActorClass = false;
    this->ActorClass = NULL;
    this->CollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    this->Montage = NULL;
    this->bPreventFromRagdollingOwner = true;
    this->ActorSpawnLocationType = EActorSpawnLocationType::ASLT_AtLocation;
    this->DistanceInFront = 200.00f;
    this->HeightAdjust = 0.00f;
    this->ActorSpawnRotationType = EActorSpawnRotationType::ASRT_WithRotation;
    this->bAttachToHand = true;
    this->HandSlot = EAttachmentHandSlot::AHS_Right;
    this->CarryType = ECarryItemType::CIT_Normal;
    this->bDropOnRagdoll = false;
    this->bCanTakeDamage = false;
    this->bCanBecomeLostObject = false;
    this->bCanDropOnStartle = false;
    this->SameSocketAttachAction = ESameSocketAttach::SSA_Nothing;
    this->bStartPhysicsSimulation = false;
    this->bApplyAnInitialImpulse = false;
    this->bInPawnDirection = false;
    this->ImpulsePower = 5000.00f;
    this->OwnerBT = NULL;
    this->OwnerNPC = NULL;
}

void UBTTask_GGSpawnActor::OnGGAnimNotifyTrigger(AGGCharacter* NotifyingNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}


