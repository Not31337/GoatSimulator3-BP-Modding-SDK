#include "GGStiffBonesComponent.h"
#include "Net/UnrealNetwork.h"

UGGStiffBonesComponent::UGGStiffBonesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGGStiffBonesComponent::RemoveCurrentStiffBone(const FName& Bone) {
}

void UGGStiffBonesComponent::OnNPCOwnerPooled(AGGNPC* NPC, bool bWasPooled) {
}

void UGGStiffBonesComponent::OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}

void UGGStiffBonesComponent::AddCurrentStiffBone(const FName& Bone) {
}

void UGGStiffBonesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGStiffBonesComponent, StiffBodyParts);
}


