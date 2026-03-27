#include "GGGrapplingBow_Plunger.h"
#include "CableComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGGrapplingBow_Plunger::AGGGrapplingBow_Plunger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->SkelMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh"));
    this->CableComponent = CreateDefaultSubobject<UCableComponent>(TEXT("Cable Component"));
    this->RopeBaseSocket = TEXT("RopeBaseSocket");
    this->AttachRopeMeshComp = NULL;
    this->CableComponent->SetupAttachment(RootComponent);
    this->SkelMesh->SetupAttachment(RootComponent);
}

void AGGGrapplingBow_Plunger::OnRep_AttachRopeMeshComp() {
}

void AGGGrapplingBow_Plunger::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGrapplingBow_Plunger, AttachRopeMeshComp);
}


