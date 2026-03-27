#include "GGAmbusherLocation.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGAmbusherLocation::AGGAmbusherLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Overlap Sphere"));
    this->VehicleOverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Vehicle Overlap Sphere"));
    this->SandMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sand Mesh"));
    this->NPCSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("NPC Spawn Location"));
    this->NPCClass = NULL;
    this->JumpOutParticle = NULL;
    this->JumpOutSound = NULL;
    this->JumpOutTime = 1.00f;
    this->InitialDelay = 0.25f;
    this->PlayerNearbyDistance = 4000.00f;
    this->NPCSpawnLocation->SetupAttachment(RootComponent);
    this->OverlapSphere->SetupAttachment(RootComponent);
    this->SandMesh->SetupAttachment(RootComponent);
    this->VehicleOverlapSphere->SetupAttachment(RootComponent);
}

void AGGAmbusherLocation::OnRep_AmubhsState() {
}

void AGGAmbusherLocation::OnNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled) {
}

void AGGAmbusherLocation::OnNPCEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AGGAmbusherLocation::OnInitialDelayedDone() {
}

void AGGAmbusherLocation::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGAmbusherLocation::MulticastAmbushStarted_Implementation() {
}

void AGGAmbusherLocation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGAmbusherLocation, AmbushState);
}


