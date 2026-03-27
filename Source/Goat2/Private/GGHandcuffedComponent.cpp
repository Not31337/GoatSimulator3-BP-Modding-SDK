#include "GGHandcuffedComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGGHandcuffedComponent::UGGHandcuffedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RemoveDuration = 60.00f;
    this->bCanHitAnimals = true;
    this->PhysConstraintClass = NULL;
    this->TargetHandcuffState = EGGHandcuffState::Free;
    this->BehindHandsConstraint = NULL;
    this->HandsConstraint = NULL;
    this->HandsToFeetConstraint = NULL;
    this->FeetConstraint = NULL;
}

void UGGHandcuffedComponent::TriggerHandcuffs(float PreventStandupFor, bool bMinimumTwoCuffs) {
}

void UGGHandcuffedComponent::RemoveHandcuffs() {
}

void UGGHandcuffedComponent::RemoveBehindHandsConstraint() {
}

void UGGHandcuffedComponent::OnRep_TargetHandcuffState() {
}

void UGGHandcuffedComponent::OnOwnerUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* Character, const FRagdollStateChangeSettings& StateChangeSettings) {
}

UGGHandcuffedComponent* UGGHandcuffedComponent::GetHandCuffedComponent(AActor* ActorToSearch, const TSubclassOf<UGGHandcuffedComponent>& Class, bool bCreateNew) {
    return NULL;
}

void UGGHandcuffedComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGHandcuffedComponent, TargetHandcuffState);
}


