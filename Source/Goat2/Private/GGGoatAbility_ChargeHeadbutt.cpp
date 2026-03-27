#include "GGGoatAbility_ChargeHeadbutt.h"
#include "Net/UnrealNetwork.h"

UGGGoatAbility_ChargeHeadbutt::UGGGoatAbility_ChargeHeadbutt() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->bRepelOnRelease = true;
    this->ActorHitReactionWeights.AddDefaulted(4);
    this->ChargeCurve = NULL;
    this->CharacterChargeCurve = NULL;
    this->SpeedGameplayEffect = NULL;
    this->MaxPowerForAnimation = 0.00f;
    this->ChargeHeadbuttLoopSound = NULL;
    this->bDebugPrints = false;
    this->bChargingHeadbutt = false;
    this->ChargeHeadbuttStartTimestamp = 0.00f;
    this->ChargeParticleSystemComponent = NULL;
    this->ChargeSoundComponent = NULL;
    this->LastChargePower = -1.00f;
}

float UGGGoatAbility_ChargeHeadbutt::GetCurrentChargePower() const {
    return 0.0f;
}

void UGGGoatAbility_ChargeHeadbutt::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatAbility_ChargeHeadbutt, bChargingHeadbutt);
    DOREPLIFETIME(UGGGoatAbility_ChargeHeadbutt, ChargeHeadbuttStartTimestamp);
}


