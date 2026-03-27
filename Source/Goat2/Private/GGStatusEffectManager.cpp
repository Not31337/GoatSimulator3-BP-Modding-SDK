#include "GGStatusEffectManager.h"
#include "Templates/SubclassOf.h"

UGGStatusEffectManager::UGGStatusEffectManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanGetStatusEffects = true;
    this->bEvenIfTooSmall = false;
    this->bPreventStatusWhenAttachedToNPC = true;
    this->bPreventStatusWhenAttachedToVehicle = true;
    this->CanTakeStatusEffectDamage = true;
    this->ShowAllShapes = false;
    this->bCanEditStatusEffectOverrides = true;
    this->DefaultShapeSizeMulti = 1.30f;
    this->ParticleScale = 1.00f;
    this->CanBeAffectedBy.AddDefaulted(7);
    this->CurrentMatChangeEffect = NULL;
    this->bCanGetBurnt = true;
    this->BurntMaterialOverride = NULL;
    this->SizzlingDurationOverride = 0.00f;
    this->bHasBeenBurnt = false;
    this->SprayedWithWaterTimestamp = -339999995214436424907732413799364296704.00f;
    this->OwnerCharacter = NULL;
}

void UGGStatusEffectManager::SetCanTakeStatusEffectDamage(bool bNewCanTakeDamage) {
}

void UGGStatusEffectManager::SetCanGetStatusEffects(bool bNewCanGetSE) {
}

void UGGStatusEffectManager::RemoveStatusEffect(EStatusEffectTypes TypeToRemove) {
}

bool UGGStatusEffectManager::RemoveParticlularStatusEffect(AGGStatusEffectBase* StatusEffectToRemove) {
    return false;
}

void UGGStatusEffectManager::NotifyCollision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

AGGStatusEffectBase* UGGStatusEffectManager::NewStatusEffect(EStatusEffectTypes TypeToCreate, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus) {
    return NULL;
}

bool UGGStatusEffectManager::HasStatusEffectByType(EStatusEffectTypes TypeToCheck) {
    return false;
}

bool UGGStatusEffectManager::HasStatusEffectByClass(TSubclassOf<AGGStatusEffectBase> StatusEffectClass) {
    return false;
}

bool UGGStatusEffectManager::HasInitManager() const {
    return false;
}

TArray<AGGStatusEffectBase*> UGGStatusEffectManager::GetStatusEffects() const {
    return TArray<AGGStatusEffectBase*>();
}

TArray<FStatusEffectOverride> UGGStatusEffectManager::GetStatusEffectOverrides() const {
    return TArray<FStatusEffectOverride>();
}

float UGGStatusEffectManager::GetParticleScale() const {
    return 0.0f;
}

FStatusShapeData UGGStatusEffectManager::GetGeneratedSphereOverlapShape() const {
    return FStatusShapeData{};
}

FStatusShapeData UGGStatusEffectManager::GetGeneratedOverlapShape() const {
    return FStatusShapeData{};
}

bool UGGStatusEffectManager::GetCanTakeStatusEffectDamage() const {
    return false;
}

TArray<EStatusEffectTypes> UGGStatusEffectManager::GetCanBeAffectedBy() const {
    return TArray<EStatusEffectTypes>();
}

FName UGGStatusEffectManager::GetBoneAttachName() const {
    return NAME_None;
}

void UGGStatusEffectManager::ClearStatusEffects() {
}

bool UGGStatusEffectManager::CanGetStatusEffects() const {
    return false;
}


