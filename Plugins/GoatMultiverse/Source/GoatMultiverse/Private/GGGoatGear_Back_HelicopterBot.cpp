#include "GGGoatGear_Back_HelicopterBot.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Back_HelicopterBot::UGGGoatGear_Back_HelicopterBot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HelicopterState = EGGHelicopterBotState::Disabled;
}

void UGGGoatGear_Back_HelicopterBot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Back_HelicopterBot, HelicopterState);
}


