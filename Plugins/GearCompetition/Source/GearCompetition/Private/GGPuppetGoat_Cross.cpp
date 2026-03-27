#include "GGPuppetGoat_Cross.h"
#include "Net/UnrealNetwork.h"

AGGPuppetGoat_Cross::AGGPuppetGoat_Cross(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bCanBeHeadbutted = false;
    this->bCanBeGrabbed = false;
    this->bCanBeOptimized = false;
    this->BonesToSimulatePhysicsUnder.AddDefaulted(2);
    this->NPCAttachToBone = TEXT("Hips");
    this->AttachParticle = NULL;
    this->DestroyParticle = NULL;
    this->AttachSound = NULL;
    this->DestroySound = NULL;
    this->CableComponentWidth = 3.00f;
    this->CableSegments = 10;
    this->CableMaterial = NULL;
    this->AttachedNPC = NULL;
    this->bPlayedDestructionEffects = false;
    this->OwnerGoat = NULL;
}

void AGGPuppetGoat_Cross::PlayDestroyEffects_Implementation() {
}

void AGGPuppetGoat_Cross::PlayAttachEffects_Implementation() {
}

void AGGPuppetGoat_Cross::OnRep_AttachedNPC() {
}

void AGGPuppetGoat_Cross::OnNPCRagdoll(ULSCharacterMovementComponent* MovementComp, ACharacter* OwnerCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void AGGPuppetGoat_Cross::OnAttachedNPCPooled(AGGNPC* PooledNPC, bool bWasPooled) {
}

void AGGPuppetGoat_Cross::OnAttachedNPCDestroyed(AActor* DestroyedActor) {
}

void AGGPuppetGoat_Cross::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPuppetGoat_Cross, AttachedNPC);
}


