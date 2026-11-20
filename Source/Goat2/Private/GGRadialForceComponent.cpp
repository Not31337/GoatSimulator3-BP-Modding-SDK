#include "GGRadialForceComponent.h"
#include "Net/UnrealNetwork.h"

UGGRadialForceComponent::UGGRadialForceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->OverlapShape = EForceOverlapShape::Sphere;
    this->Radius = 200.00f;
    this->HalfConeAngle = 45.00f;
    this->bRotateBoxWithComponent = true;
    this->bDisregardHeightDifference = false;
    this->Falloff = RIF_Constant;
    this->bTriggerCharacterRagdoll = true;
    this->bTriggerGoatRagdoll = true;
    this->bIgnoreGoats = false;
    this->bClientSideForce = true;
    this->bIgnoreOwningActor = true;
    this->bDisallowPActorsFromRagdolling = true;
    this->DisallowFor = 1.00f;
    this->bForceFromGear = false;
    this->DamageType = ETypeOfDamage::TOD_Impact;
    this->DestructibleDamageType = ETypeOfDamage::TOD_Impact;
    this->ObjectTypesToAffect.AddDefaulted(6);
    this->bApplyForce = true;
    this->bScaleForceByMass = false;
    this->ForceStrength = 0.00f;
    this->CharacterForceStrength = 0.00f;
    this->VehicleForceStrength = 0.00f;
    this->bInvertForceStrength = false;
    this->bAddUpwardForce = false;
    this->UpwardForce = 0.00f;
    this->UpwardForceCharacter = 0.00f;
    this->UpwardForceVehicle = 0.00f;
    this->bCanDealForceDamage = false;
    this->ValidForForceDamage.AddDefaulted(4);
    this->bForceDestructibleDamage = true;
    this->ForceDamageDelay = 1.00f;
    this->ForceDamage = 100.00f;
    this->bDealDamageToGGMeshComps = false;
    this->bAlsoDealDamageToOwner = false;
    this->AdditionalForceDamageType = ETypeOfDamage::TOD_None;
    this->ImpulseStrength = 1000.00f;
    this->VehicleImpulseStrengthModifier = 1.00f;
    this->bImpulseVelChange = false;
    this->ValidForImpulseDamage.AddDefaulted(4);
    this->bImpulseDestructibleDamage = true;
    this->ImpulseDamage = 0.00f;
    this->bDebugDraw = false;
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

void UGGRadialForceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGRadialForceComponent, bInvertForceStrength);
}


