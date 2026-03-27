#include "GGGoatGear_Static_DemonMask.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_DemonMask::UGGGoatGear_Static_DemonMask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnGoingEyeParticles = NULL;
    this->ActviveAbilityEyeParticles = NULL;
    this->bIsAbilityActive = false;
    this->RightEyeComp = NULL;
    this->LeftEyeComp = NULL;
    this->ActiveRightEyeComp = NULL;
    this->ActiveLeftEyeComp = NULL;
}

void UGGGoatGear_Static_DemonMask::OnRep_IsAbilityActive() {
}

void UGGGoatGear_Static_DemonMask::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_DemonMask, bIsAbilityActive);
}


