#include "GGPlanterPatch.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGPlanterPatch::AGGPlanterPatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->PlanterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Planter Mesh"));
    this->TreeMesh = NULL;
    this->TimeUntilDestruction = 60.00f;
    this->bSpawnedFromGear = false;
    this->PlantedBy = NULL;
    this->PlanterMesh->SetupAttachment(RootComponent);
}

void AGGPlanterPatch::PlantedPhysActor(AGGPhysicsActor* PActor) {
}

bool AGGPlanterPatch::IsSpawnedFromGear() const {
    return false;
}

bool AGGPlanterPatch::IsAnyPatchesNear(UObject* WorldContextObject, FVector Location, float CheckDistSqrd) {
    return false;
}

void AGGPlanterPatch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPlanterPatch, bSpawnedFromGear);
}


