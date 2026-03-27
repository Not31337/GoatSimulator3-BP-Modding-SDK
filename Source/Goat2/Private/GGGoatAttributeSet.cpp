#include "GGGoatAttributeSet.h"
#include "Net/UnrealNetwork.h"

UGGGoatAttributeSet::UGGGoatAttributeSet() {
}

void UGGGoatAttributeSet::OnRep_SpeedMultiplier(const FGameplayAttributeData& OldValue) {
}

void UGGGoatAttributeSet::OnRep_RagdollMovementVelocity(const FGameplayAttributeData& OldValue) {
}

void UGGGoatAttributeSet::OnRep_GravityScale(const FGameplayAttributeData& OldValue) {
}

void UGGGoatAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatAttributeSet, SpeedMultiplier);
    DOREPLIFETIME(UGGGoatAttributeSet, GravityScale);
    DOREPLIFETIME(UGGGoatAttributeSet, RagdollMovementVelocity);
}


