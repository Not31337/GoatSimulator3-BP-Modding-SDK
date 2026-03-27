#include "GGGoatGear_Back_PieThrower.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Back_PieThrower::UGGGoatGear_Back_PieThrower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsPieVisible = true;
}

void UGGGoatGear_Back_PieThrower::OnRep_bIsPieVisible() {
}

void UGGGoatGear_Back_PieThrower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Back_PieThrower, bIsPieVisible);
}


