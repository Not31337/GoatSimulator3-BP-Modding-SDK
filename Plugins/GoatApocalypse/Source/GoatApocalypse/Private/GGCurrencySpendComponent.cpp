#include "GGCurrencySpendComponent.h"

UGGCurrencySpendComponent::UGGCurrencySpendComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->FormatItemString = TEXT("ItemName");
    this->FormatCostString = TEXT("Cost");
    this->HoldDuration = 1.50f;
    this->bCanBeInteractedWith = true;
    this->bDisableInteractionAfterPurchase = false;
    this->MinTimeBetweenInteractions = 1.00f;
    this->PurchaseSuccessfulSpenderParticle = NULL;
    this->PurchaseSuccessfulSpenderSound = NULL;
    this->CachedInteractingPlayerController = NULL;
}

void UGGCurrencySpendComponent::SpawnSpendEffects_Implementation(AActor* SourceActor) {
}

void UGGCurrencySpendComponent::ForceUpdateInteractableHint() {
}


