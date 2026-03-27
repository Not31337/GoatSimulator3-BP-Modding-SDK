#include "GGGoatGear_Scene_Feet_RocketBoot.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Scene_Feet_RocketBoot::UGGGoatGear_Scene_Feet_RocketBoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegularFeetParticle = NULL;
    this->BoostFeetParticle = NULL;
    this->BootParticleLeftTop = NULL;
    this->BootParticleRightTop = NULL;
    this->BootParticleRightBottom = NULL;
    this->BootParticleLeftBottom = NULL;
    this->BoostParticleLeftTop = NULL;
    this->BoostParticleRightTop = NULL;
    this->BoostParticleRightBottom = NULL;
    this->BoostParticleLeftBottom = NULL;
    this->LeftTopFoot = NULL;
    this->RightTopFoot = NULL;
    this->RightBottomFoot = NULL;
    this->LeftBottomFoot = NULL;
    this->bIsAbilityActive = false;
}

void UGGGoatGear_Scene_Feet_RocketBoot::OnRep_IsAbilityActive() {
}

void UGGGoatGear_Scene_Feet_RocketBoot::OnAltGoatChanged(AGGGoat* InGoat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}

void UGGGoatGear_Scene_Feet_RocketBoot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Scene_Feet_RocketBoot, bIsAbilityActive);
}


