#include "GGPhysicsActor_FishingRod.h"
#include "Net/UnrealNetwork.h"

AGGPhysicsActor_FishingRod::AGGPhysicsActor_FishingRod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bCanBeOptimized = false;
    this->bCanChangeTickRate = false;
    this->CatchingAnimMontage = NULL;
    this->IdleSurfaceParticle = NULL;
    this->CatchSurfaceParticle = NULL;
    this->SurfaceSound = NULL;
    this->FishingBobberMesh = NULL;
    this->FishingLineParticle = NULL;
    this->BeamEndActorClass = NULL;
    this->FishingBobberSpeed = 1.00f;
    this->BobberLandParticle = NULL;
    this->BobberLandSound = NULL;
    this->FishedUpCharacterParticle = NULL;
    this->FishedUpCharacterSound = NULL;
    this->OwnerNPC = NULL;
    this->bBobberThrown = false;
    this->bHasBobberLanded = false;
    this->SurfaceParticleComp = NULL;
    this->SurfaceAudioComp = NULL;
    this->FishingBobberActor = NULL;
    this->FishingLineParticleComp = NULL;
    this->BeamStartActor = NULL;
}

void AGGPhysicsActor_FishingRod::OnGGAnimNotifyTrigger(AGGCharacter* NotifyingNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}

void AGGPhysicsActor_FishingRod::FishUpActorEffects_Implementation(FVector_NetQuantize Location) {
}

void AGGPhysicsActor_FishingRod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPhysicsActor_FishingRod, TargetLocation);
}


