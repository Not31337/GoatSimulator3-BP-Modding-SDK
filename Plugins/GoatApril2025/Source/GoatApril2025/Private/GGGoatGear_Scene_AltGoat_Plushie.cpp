#include "GGGoatGear_Scene_AltGoat_Plushie.h"

UGGGoatGear_Scene_AltGoat_Plushie::UGGGoatGear_Scene_AltGoat_Plushie(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlushieTransformDelay = 0.30f;
    this->TraceMeshComponent = NULL;
    this->TraceMeshComponentClass = NULL;
    this->PlushieNPCComponentClass = NULL;
    this->PlushiePActorComponentClass = NULL;
}

void UGGGoatGear_Scene_AltGoat_Plushie::TransformActors(const TArray<AActor*>& HitActors) {
}

AGGPhysicsActor* UGGGoatGear_Scene_AltGoat_Plushie::PlushifyActor(AActor* Actor) {
    return NULL;
}

float UGGGoatGear_Scene_AltGoat_Plushie::PlayBaaMontage() {
    return 0.0f;
}

void UGGGoatGear_Scene_AltGoat_Plushie::OnTransformedActorsMulticast_Implementation(const TArray<AGGPhysicsActor*>& TransformedActors) {
}



void UGGGoatGear_Scene_AltGoat_Plushie::OnAbilityActivatedMulticast_Implementation() {
}

void UGGGoatGear_Scene_AltGoat_Plushie::ChibifyActor(AGGNPC_Humanoid* NPC) {
}

void UGGGoatGear_Scene_AltGoat_Plushie::ActivateAbilityServer_Implementation(float ActivationTime, float ActivationDelay, const TArray<AActor*>& OverlappingActors) {
}


