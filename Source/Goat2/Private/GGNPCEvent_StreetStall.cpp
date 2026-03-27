#include "GGNPCEvent_StreetStall.h"
#include "Components/SphereComponent.h"
#include "EEventDeactivation.h"
#include "EEventType.h"

AGGNPCEvent_StreetStall::AGGNPCEvent_StreetStall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->EventType = EEventType::ET_Dynamic;
    this->EventDeactivation = EEventDeactivation::ED_RemovePastRelevant;
    this->bIgnoreNPCsHoldingObjects = true;
    this->bRemovePanickedNPCs = true;
    this->bRemoveRagdolledNPCs = true;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Overlap Sphere"));
    this->DrawQueuePositions = false;
    this->VendorCharacter = NULL;
    this->StallActor = NULL;
    this->VendorAtStall = false;
    this->IsBuyerInLoc = false;
    this->OverlapSphere->SetupAttachment(RootComponent);
}

void AGGNPCEvent_StreetStall::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AGGNPC* AGGNPCEvent_StreetStall::GetVendorCharacter() const {
    return NULL;
}

AGGNPC* AGGNPCEvent_StreetStall::GetCurrentBuyer() {
    return NULL;
}



