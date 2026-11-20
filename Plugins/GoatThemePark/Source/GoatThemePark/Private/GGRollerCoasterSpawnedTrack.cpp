#include "GGRollerCoasterSpawnedTrack.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"

AGGRollerCoasterSpawnedTrack::AGGRollerCoasterSpawnedTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->GrindableData = NULL;
    this->TangentMultiplier = 1.00f;
    this->bReplicatedClosed = false;
    this->bBuildInProgress = true;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->TrackMeshesPoolSize = 16;
    this->BuiltPointCount = 0;
    this->bBuiltClosed = false;
    this->SplineComponent->SetupAttachment(RootComponent);
}

void AGGRollerCoasterSpawnedTrack::OnRep_SplineState() {
}

void AGGRollerCoasterSpawnedTrack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGRollerCoasterSpawnedTrack, TrackMeshParams);
    DOREPLIFETIME(AGGRollerCoasterSpawnedTrack, GrindsplineOffsets);
    DOREPLIFETIME(AGGRollerCoasterSpawnedTrack, GrindableData);
    DOREPLIFETIME(AGGRollerCoasterSpawnedTrack, TangentMultiplier);
    DOREPLIFETIME(AGGRollerCoasterSpawnedTrack, ReplicatedSplinePoints);
    DOREPLIFETIME(AGGRollerCoasterSpawnedTrack, bReplicatedClosed);
    DOREPLIFETIME(AGGRollerCoasterSpawnedTrack, bBuildInProgress);
}


