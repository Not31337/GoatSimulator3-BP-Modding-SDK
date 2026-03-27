#include "GGGoatGear_Static_LaserSight.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_LaserSight::UGGGoatGear_Static_LaserSight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLaserOn = false;
    this->LaserLength = 1000.00f;
    this->BeamPArticle = NULL;
    this->BeamSound = NULL;
    this->BeamStartSound = NULL;
    this->RightEyeBeamComp = NULL;
    this->LeftEyeBeamComp = NULL;
    this->BeamAudioComp = NULL;
}

void UGGGoatGear_Static_LaserSight::OnRep_LaserOn() {
}

void UGGGoatGear_Static_LaserSight::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_LaserSight, bLaserOn);
}


