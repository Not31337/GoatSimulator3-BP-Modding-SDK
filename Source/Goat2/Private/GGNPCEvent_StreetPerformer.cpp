#include "GGNPCEvent_StreetPerformer.h"
#include "Components/SphereComponent.h"
#include "EEventDeactivation.h"
#include "EEventType.h"

AGGNPCEvent_StreetPerformer::AGGNPCEvent_StreetPerformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->EventType = EEventType::ET_Dynamic;
    this->EventDeactivation = EEventDeactivation::ED_RemovePastRelevant;
    this->bRemovePanickedNPCs = true;
    this->bRemoveRagdolledNPCs = true;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Overlap Sphere"));
    this->bIsPerforming = false;
    this->PerformerNPC = NULL;
    this->OverlapSphere->SetupAttachment(RootComponent);
}

void AGGNPCEvent_StreetPerformer::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AGGNPC* AGGNPCEvent_StreetPerformer::GetPerformerNPC() const {
    return NULL;
}


