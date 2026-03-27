#include "GGLivingProp.h"
#include "Net/UnrealNetwork.h"

UGGLivingProp::UGGLivingProp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReinfausAbility = NULL;
    this->ParentPActor = NULL;
    this->LeftEye = NULL;
    this->RightEye = NULL;
}

void UGGLivingProp::StartJump() {
}

void UGGLivingProp::OnParentMaterialChanged(AGGPhysicsActor_Base* PhysActor, const TArray<FMatElement>& NewMaterials) {
}

void UGGLivingProp::OnOwnerShattered(AGGPhysicsActor* DestroyedOwner) {
}

void UGGLivingProp::MulticastJump_Implementation() {
}

void UGGLivingProp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGLivingProp, ReinfausAbility);
}


