#include "GGIceSplineMesh.h"
#include "Net/UnrealNetwork.h"

UGGIceSplineMesh::UGGIceSplineMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->Mobility = EComponentMobility::Movable;
    this->OwnerPath = NULL;
    this->SectionType = ESectionType::ST_Middle;
    this->bBlock = false;
    this->CurrentHealth = 300;
    this->SpawnParticle = NULL;
    this->OngoingPreShatterParticle = NULL;
}

void UGGIceSplineMesh::StartBlocking() {
}

void UGGIceSplineMesh::OnRep_IceSectionSettings() {
}

void UGGIceSplineMesh::OnRep_CurrentHealth() {
}

void UGGIceSplineMesh::OnRep_Block() {
}

void UGGIceSplineMesh::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGIceSplineMesh, IceSectionSettings);
    DOREPLIFETIME(UGGIceSplineMesh, bBlock);
    DOREPLIFETIME(UGGIceSplineMesh, CurrentHealth);
}


