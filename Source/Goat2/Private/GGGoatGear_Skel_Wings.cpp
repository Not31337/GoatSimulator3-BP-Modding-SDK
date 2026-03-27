#include "GGGoatGear_Skel_Wings.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Skel_Wings::UGGGoatGear_Skel_Wings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlyingParticles = NULL;
    this->FlyingSound = NULL;
    this->bIsFlying = false;
}

void UGGGoatGear_Skel_Wings::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Skel_Wings, bIsFlying);
}


