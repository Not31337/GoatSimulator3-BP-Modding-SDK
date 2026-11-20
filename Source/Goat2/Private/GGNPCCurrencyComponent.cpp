#include "GGNPCCurrencyComponent.h"

UGGNPCCurrencyComponent::UGGNPCCurrencyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasMoney = true;
}

void UGGNPCCurrencyComponent::ResetCurrencyComponent() {
}

void UGGNPCCurrencyComponent::OnNPCRagdolledFromDamage(AGGNPC* NPC, const UDamageType* DamageType, AActor* DamageCauser, bool bWasAlreadyRagdolled) {
}


