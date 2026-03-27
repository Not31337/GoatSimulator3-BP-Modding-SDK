#include "GGRadialForceComponent.h"

UGGRadialForceComponent::UGGRadialForceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Radius = 200.00f;
    this->Falloff = RIF_Constant;
    this->bTriggerCharacterRagdoll = true;
    this->bIgnoreGoats = true;
    this->bClientSideForce = true;
    this->bDrawRadius = false;
    this->bIgnoreOwningActor = true;
    this->bDisallowPActorsFromRagdolling = true;
    this->DisallowFor = 1.00f;
    this->bForceFromGear = false;
    this->bApplyForce = true;
    this->CharacterForceStrength = 0.00f;
    this->VehicleForceStrength = 0.00f;
    this->ForceStrength = 0.00f;
    this->bDealDamageToGGMeshComps = false;
    this->bAlsoDealDamageToOwner = false;
    this->bCanDealForceDamage = false;
    this->ForceDamageDelay = 1.00f;
    this->ForceDamage = 100.00f;
    this->bAddUpwardForce = false;
    this->UpwardForce = 0.00f;
    this->UpwardForceCharacter = 0.00f;
    this->UpwardForceVehicle = 0.00f;
    this->ImpulseStrength = 1000.00f;
    this->VehicleImpulseStrengthModifier = 1.00f;
    this->bImpulseVelChange = false;
    this->ImpulseDamage = 0.00f;
    this->bConeVolume = false;
    this->HalfConeAngle = 45.00f;
    this->DamageType = ETypeOfDamage::TOD_Impact;
    this->DestructibleDamageType = ETypeOfDamage::TOD_Impact;
    this->AdditionalForceDamageType = ETypeOfDamage::TOD_None;
    this->ObjectTypesToAffect.AddDefaulted(6);
}

void UGGRadialForceComponent::RemoveObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType) {
}

void UGGRadialForceComponent::FireImpulse() {
}

UGGRadialForceComponent* UGGRadialForceComponent::CreateRadialForceComponent_K2(UObject* OwnerObject, USceneComponent* ParentComponent, FVector AttachmentOffset, FName ComponentName, float ForceRadius, bool bStartEnabled, const TArray<TEnumAsByte<ECollisionChannel>>& AdditionalCollisonChannels) {
    return NULL;
}

void UGGRadialForceComponent::AddObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType) {
}


