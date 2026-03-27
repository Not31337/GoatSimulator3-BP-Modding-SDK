#include "GGGrafittiTagger_GrafittiArea.h"
#include "Net/UnrealNetwork.h"

AGGGrafittiTagger_GrafittiArea::AGGGrafittiTagger_GrafittiArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bWasSprayed = false;
}


void AGGGrafittiTagger_GrafittiArea::OnRep_WasSprayed() {
}

void AGGGrafittiTagger_GrafittiArea::MarkAsSprayed() {
}


void AGGGrafittiTagger_GrafittiArea::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGrafittiTagger_GrafittiArea, bWasSprayed);
}


