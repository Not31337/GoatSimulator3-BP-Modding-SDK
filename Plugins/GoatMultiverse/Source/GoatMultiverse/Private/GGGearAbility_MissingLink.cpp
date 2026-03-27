#include "GGGearAbility_MissingLink.h"

UGGGearAbility_MissingLink::UGGGearAbility_MissingLink() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->AppearancePartName = TEXT("MissingLink_Head");
    this->bConvertPlayers = true;
    this->MissingLinkAltGoat = NULL;
    this->MissingLinkGearAsset = NULL;
    this->ScanDuration = 2.00f;
}

void UGGGearAbility_MissingLink::OnScannerFinished() {
}

void UGGGearAbility_MissingLink::MulticastUnlockMissingLinkGoat_Implementation(AGGGoat* TargetGoat) {
}


