#include "GGPhysicsActor_Skeletal.h"
#include "GGPActorSkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGPhysicsActor_Skeletal::AGGPhysicsActor_Skeletal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGGPActorSkeletalMeshComponent>(TEXT("Skeletal Mesh"));
    this->Tags.AddDefaulted(2);
    const FProperty* p_MeshComp = GetClass()->FindPropertyByName("MeshComp");
    (*p_MeshComp->ContainerPtrToValuePtr<UMeshComponent*>(this)) = (UMeshComponent*)RootComponent;
    this->SkeletalMesh = (USkeletalMeshComponent*)RootComponent;
    this->SkeletalMassScale = 0.20f;
    this->MinTimeBetweenCollisions = 1.00f;
    this->SyncBodyMaxDistanceSquared = 5500.00f;
    this->CurrentSkeletalMesh = NULL;
}

void AGGPhysicsActor_Skeletal::SetNewMesh(USkeletalMesh* NewSkeletalMesh) {
}

void AGGPhysicsActor_Skeletal::OnRep_CurrentSkeletalMesh() {
}

void AGGPhysicsActor_Skeletal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPhysicsActor_Skeletal, RagdollSyncLocation);
    DOREPLIFETIME(AGGPhysicsActor_Skeletal, RagdollSyncVelocity);
    DOREPLIFETIME(AGGPhysicsActor_Skeletal, BoneTransformArray);
    DOREPLIFETIME(AGGPhysicsActor_Skeletal, CurrentSkeletalMesh);
}


