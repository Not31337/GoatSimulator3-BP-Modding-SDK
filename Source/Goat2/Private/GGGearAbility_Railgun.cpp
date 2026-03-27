#include "GGGearAbility_Railgun.h"

UGGGearAbility_Railgun::UGGGearAbility_Railgun() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->ChargeUpDuration = 1.00f;
    this->BeamLength = 10000.00f;
    this->TraceLength = 5000.00f;
    this->BeamWidth = 50.00f;
    this->ImpulsePower = 40000.00f;
    this->CharacterImpulsePower = 1500.00f;
    this->TotalNPCsToOneShot = 10;
    this->TotalNPCsToOneShotGen8 = 5;
    this->TotalNPCsToOneShotMobile = 3;
    this->RailgunGear = NULL;
}

void UGGGearAbility_Railgun::FireTrace(const FGameplayAbilitySpecHandle Handle, AGGGoat* Goat) {
}


