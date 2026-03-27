#include "GGGearAbility_Tagger.h"

UGGGearAbility_Tagger::UGGGearAbility_Tagger() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->DecalActorClass = NULL;
    this->StartEffectClass = NULL;
    this->ActivationDelay = 1.00f;
    this->UpwardSpawnOffset = 15.00f;
    this->MaxSpawnDistance = 200.00f;
    this->MaxSpawnedDecals = 5;
    this->bCancelAbilityIfNoWall = false;
    this->bRandomRotation = false;
    this->bShowDebugTrace = false;
    this->MinRotation = 10.00f;
    this->MaxRotation = -10.00f;
    this->FoundingFatherInstinctOverlap = NULL;
    this->RattlingSound = NULL;
}

void UGGGearAbility_Tagger::OnActivationDelay(UGGGoatGear_Static_Base* TaggerGear) {
}


