#include "GGWaterFloatingComponent.h"

UGGWaterFloatingComponent::UGGWaterFloatingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultFloatBoneName = TEXT("Spine_02");
    this->FloatForce = 200.00f;
    this->FloatSpeedMultiplier = 1.00f;
    this->SinkDampening = 500.00f;
    this->WaterLineCheckDist = 15.00f;
    this->bUseCenterOfMass = true;
    this->bPlayedEnterWaterEffect = false;
    this->FloatingACNewSpeed = 0.00f;
    this->FloatingParticleComp = NULL;
    this->FloatingMovingParticleComp = NULL;
    this->FloatingMovingFastParticleComp = NULL;
    this->FloatingAudioComp = NULL;
    this->OwnerPrimComp = NULL;
    this->OwnerCharacter = NULL;
    this->OwnerGoat = NULL;
    this->OwnerPhysActor = NULL;
    this->OwnerPhysActorSkel = NULL;
    this->OwnerVehicle = NULL;
    this->OwnerMovementComp = NULL;
    this->WaterPhysVolume = NULL;
}


