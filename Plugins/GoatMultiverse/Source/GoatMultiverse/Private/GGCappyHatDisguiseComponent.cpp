#include "GGCappyHatDisguiseComponent.h"

UGGCappyHatDisguiseComponent::UGGCappyHatDisguiseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CappyHatMeshComponent = NULL;
    this->CappyHatMesh = NULL;
}

void UGGCappyHatDisguiseComponent::ServerSetGait_Implementation(ELSGait Gait) {
}

void UGGCappyHatDisguiseComponent::ServerMove_Implementation(FVector Direction) {
}

void UGGCappyHatDisguiseComponent::ServerHeadbutt_Implementation(FVector Direction) {
}

void UGGCappyHatDisguiseComponent::ServerCharacterJump_Implementation() {
}

void UGGCappyHatDisguiseComponent::OnRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGCappyHatDisguiseComponent::Headbutt() {
}


