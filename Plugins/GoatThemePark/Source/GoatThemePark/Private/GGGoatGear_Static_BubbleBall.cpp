#include "GGGoatGear_Static_BubbleBall.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_BubbleBall::UGGGoatGear_Static_BubbleBall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BubbleBallClass = NULL;
    this->InflateSound = NULL;
    this->MaxTilt = 90.00f;
    this->MaxTargetScale = 10.00f;
    this->ScaleDuration = 1.00f;
}

void UGGGoatGear_Static_BubbleBall::OnRep_BubbleScaleUpState() {
}

void UGGGoatGear_Static_BubbleBall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_BubbleBall, BubbleScaleUpState);
}


