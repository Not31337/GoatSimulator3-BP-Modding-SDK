#include "GGEggSaddleEgg.h"
#include "Net/UnrealNetwork.h"

AGGEggSaddleEgg::AGGEggSaddleEgg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bForceNotDestructible = true;
    this->bChangesReplicateMovementInRuntime = true;
    this->Bounds = 0.00f;
    this->ContainsActor = NULL;
    this->OwnerGoat = NULL;
    this->EggSaddle = NULL;
    this->HasBeenThrown = false;
    this->HasHatched = false;
    this->ReleaseImpulseDamageType = NULL;
    this->DefaultDamageOnRelease = 50.00f;
    this->LaunchPower = 2000.00f;
    this->ReleaseActorWhenHatched = true;
    this->HatchOnImpact = true;
    this->ShatterWhenHatched = true;
}

void AGGEggSaddleEgg::Throw_Implementation() {
}

bool AGGEggSaddleEgg::ShouldFollowPlayer() const {
    return false;
}

void AGGEggSaddleEgg::ReleaseContainedActor_Implementation() {
}

void AGGEggSaddleEgg::OnRep_HasHatched_Implementation(bool PreviousHasHatched) {
}

void AGGEggSaddleEgg::OnRep_HasBeenThrown_Implementation(bool PreviousHasBeenThrown) {
}

void AGGEggSaddleEgg::OnRep_EggSaddle_Implementation(UGGGoatGear_Static_EggSaddle* PreviousEggSaddle) {
}

void AGGEggSaddleEgg::OnRep_ContainsActor_Implementation(AActor* PreviousActor) {
}

void AGGEggSaddleEgg::OnHatched_Implementation() {
}

void AGGEggSaddleEgg::OnForceHatched_Implementation(float DelayHatch) {
}

void AGGEggSaddleEgg::MulticastThrow_Implementation() {
}

void AGGEggSaddleEgg::MulticastReleaseContainedActor_Implementation(AActor* InContainsActor, FVector ReleaseLocation, FGGReleaseOptions Options) {
}

void AGGEggSaddleEgg::Hatch_Implementation(const FVector& HatchImpulse) {
}

void AGGEggSaddleEgg::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGEggSaddleEgg, Bounds);
    DOREPLIFETIME(AGGEggSaddleEgg, ContainsActor);
    DOREPLIFETIME(AGGEggSaddleEgg, EggSaddle);
    DOREPLIFETIME(AGGEggSaddleEgg, HasBeenThrown);
    DOREPLIFETIME(AGGEggSaddleEgg, HasHatched);
}


