#include "GGShellEffectComponent.h"
#include "Templates/SubclassOf.h"

UGGShellEffectComponent::UGGShellEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShellMaterial = NULL;
    this->SecondaryShellMaterial = NULL;
    this->AffectedActor = NULL;
    this->AffectedPActor = NULL;
    this->AffectedGoat = NULL;
    this->AffectedVehicle = NULL;
    this->AffectedNPC = NULL;
}

void UGGShellEffectComponent::SetMaterialOpacity(float NewOpacity) {
}

void UGGShellEffectComponent::RemakeShellMeshes() {
}

void UGGShellEffectComponent::OnGearWasUpdated(AGGGoat* Goat, const TArray<USceneComponent*>& CurrentGoatGear) {
}

TArray<UGGShellEffectComponent*> UGGShellEffectComponent::GetShellEffectComponents(AActor* FromActor, TSubclassOf<UGGShellEffectComponent> SpecificClass) {
    return TArray<UGGShellEffectComponent*>();
}

UGGShellEffectComponent* UGGShellEffectComponent::GetShellEffectComponent(AActor* FromActor, TSubclassOf<UGGShellEffectComponent> SpecificClass) {
    return NULL;
}

UGGShellEffectComponent* UGGShellEffectComponent::CreateNewShellEffect(AActor* NewAffectedActor, UMaterialInterface* NewShellMaterial, UMaterialInterface* NewSecondaryShellMaterial, TSubclassOf<UGGShellEffectComponent> SpecificClass) {
    return NULL;
}


