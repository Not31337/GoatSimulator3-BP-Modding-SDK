#include "GGGoatGear_Static_Architect.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_Architect::UGGGoatGear_Static_Architect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TextMaterial = NULL;
    this->RollupSpeed = 20.00f;
    this->RagdollAtDistance = 20.00f;
    this->HitEffect = NULL;
    this->HitSoundEffect = NULL;
    this->DistanceWidgetClass = NULL;
    this->TapeBeamParticle = NULL;
    this->InstinctMaxCableLength = 100;
    this->TapeBeamEndActorClass = NULL;
    this->bRollUp = false;
    this->DistanceWidgetComp = NULL;
    this->DistanceTextWidget = NULL;
    this->BeamPArticle = NULL;
    this->StartPointActor = NULL;
    this->EndPointActor = NULL;
}



void UGGGoatGear_Static_Architect::OnRep_RollUp() {
}

void UGGGoatGear_Static_Architect::OnRep_CableAttachInfo() {
}

void UGGGoatGear_Static_Architect::MulticastPlayHit_Implementation() {
}

void UGGGoatGear_Static_Architect::MulticastPlayAttachSound_Implementation(bool bForAttach) {
}

float UGGGoatGear_Static_Architect::GetCableLength() const {
    return 0.0f;
}

void UGGGoatGear_Static_Architect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_Architect, CableAttachInfo);
    DOREPLIFETIME(UGGGoatGear_Static_Architect, bRollUp);
}


