#include "GGGoatGear_Static_Tant.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_Tant::UGGGoatGear_Static_Tant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TantHead = NULL;
    this->TantAnimationPose = NULL;
    this->HeadForwardOffset = 30.00f;
    this->HeadUpwardOffset = 0.00f;
    this->TantBody = NULL;
    this->DressOverrideMaterial = NULL;
    this->BodyForwardOffset = 30.00f;
    this->BodyUpwardOffset = 0.00f;
    this->TantHair = NULL;
    this->TantGlasses = NULL;
    this->Gun = NULL;
    this->GunForwardOffset = 0.00f;
    this->GunUpwardOffset = 108.00f;
    this->GunRightOffset = 30.00f;
    this->RecoilRotation = -30.00f;
    this->RecoilDuration = 0.50f;
    this->RecoilCurve = NULL;
    this->HeadMeshComponent = NULL;
    this->BodyMeshComponent = NULL;
    this->HairMeshComponent = NULL;
    this->GlassesMeshComponent = NULL;
    this->GunMeshComponent = NULL;
    this->LerpFactor = 0.00f;
}

void UGGGoatGear_Static_Tant::TantSetup() {
}

void UGGGoatGear_Static_Tant::OnRep_OriginalRotation() {
}

void UGGGoatGear_Static_Tant::OnRep_LerpFactor() {
}

void UGGGoatGear_Static_Tant::OnRep_EndRotation() {
}

void UGGGoatGear_Static_Tant::DoRecoil() {
}

void UGGGoatGear_Static_Tant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_Tant, OriginalRotation);
    DOREPLIFETIME(UGGGoatGear_Static_Tant, EndRotation);
    DOREPLIFETIME(UGGGoatGear_Static_Tant, LerpFactor);
}


