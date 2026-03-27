#include "GGGearAbility_Rapturer.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_Rapturer::UGGGearAbility_Rapturer() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->RaptureRadius = 400.00f;
    this->RiseTargetHeight = 850.00f;
    this->RiseSpeed = 10.00f;
    this->TagRaptureAbility = TEXT("GearAbility.Rapturer");
    this->TagFizzleEffect = TEXT("GameplayCue.Rapture.Fizzle");
    this->TagRaptureOngoingLight = TEXT("GameplayCue.Rapture.OngoingLight");
    this->TagRaptureCaptureBeam = TEXT("GameplayCue.Rapture.CaptureBeam");
    this->TagRaptureOngoingSparkles = TEXT("GameplayCue.Rapture.OngoingSparkles");
    this->MontageHumanFloating = NULL;
    this->bSendNPCWhileOthersBeingRaptured = true;
    this->MaxAmountToRapture = 50;
    this->MaxGhostToRapture = 5;
    this->bRaptureIsInProgress = false;
}

void UGGGearAbility_Rapturer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_Rapturer, RapturedNPCs);
    DOREPLIFETIME(UGGGearAbility_Rapturer, bRaptureIsInProgress);
}


