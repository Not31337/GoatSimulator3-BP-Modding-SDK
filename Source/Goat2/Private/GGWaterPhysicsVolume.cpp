#include "GGWaterPhysicsVolume.h"
#include "NavAreas/NavArea_Null.h"

AGGWaterPhysicsVolume::AGGWaterPhysicsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //this->bForceImmediateBeginPlay = true;
    this->bWaterVolume = true;
    this->bPhysicsOnContact = true;
    this->OverriddenWaterEffects = NULL;
    this->bCircularWaterVolume = false;
    this->bCreateWaterMeshes = true;
    this->bDisableEnterExitEffects = false;
    this->bDisableFloatingEffects = false;
    this->UseDataAssetFriction = true;
    this->bAllowJumpFullySubmerged = false;
    this->JumpHeightModifier = 1.00f;
    this->BuoyancyModifier = 1.00f;
    this->bFrictionAffectsRagdoll = false;
    this->RagdollFrictionMultiplier = 1.00f;
    this->bAffectNavMesh = true;
    this->AreaClass = UNavArea_Null::StaticClass();
    this->WaterPlane = NULL;
}

void AGGWaterPhysicsVolume::UpdateWaterVolume() {
}

UGGWaterVolumeEffects* AGGWaterPhysicsVolume::GetWaterVolumeEffects() const {
    return NULL;
}


