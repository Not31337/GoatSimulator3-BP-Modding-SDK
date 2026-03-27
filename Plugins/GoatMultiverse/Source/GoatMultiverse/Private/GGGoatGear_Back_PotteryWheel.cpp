#include "GGGoatGear_Back_PotteryWheel.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Back_PotteryWheel::UGGGoatGear_Back_PotteryWheel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentSpinRate = 0.00f;
    this->GnomeScale = 0.00f;
    this->GnomeAttachSocket = TEXT("SpinningSocket");
    this->GnomeInitialMesh = NULL;
}

void UGGGoatGear_Back_PotteryWheel::OnRep_GnomeScale() {
}

void UGGGoatGear_Back_PotteryWheel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Back_PotteryWheel, CurrentSpinRate);
    DOREPLIFETIME(UGGGoatGear_Back_PotteryWheel, GnomeScale);
}


