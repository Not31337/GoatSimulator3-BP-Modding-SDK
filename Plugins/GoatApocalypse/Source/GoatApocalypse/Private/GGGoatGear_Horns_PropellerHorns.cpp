#include "GGGoatGear_Horns_PropellerHorns.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Horns_PropellerHorns::UGGGoatGear_Horns_PropellerHorns(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlyingLinearDampening = 1.00f;
    this->FlyingAngularDampening = 0.50f;
    this->UpForceThrust = 1300.00f;
    this->OngoingFlyingSound = NULL;
    this->DeactivationSound = NULL;
    this->OngoingParticle = NULL;
    this->SpinAnimation = NULL;
    this->dashiz88_please_dont_change = false;
    this->TimeFlyingForInstinct = 120.00f;
    this->bIsPropellerActive = false;
    this->FlyingSoundComp = NULL;
    this->OngoingParticleComp = NULL;
}

void UGGGoatGear_Horns_PropellerHorns::OnRep_IsPropellerActive() {
}

void UGGGoatGear_Horns_PropellerHorns::OnHitMesh(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGGoatGear_Horns_PropellerHorns::MulticastPlayDeactivationSound_Implementation() {
}

void UGGGoatGear_Horns_PropellerHorns::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Horns_PropellerHorns, bIsPropellerActive);
}


