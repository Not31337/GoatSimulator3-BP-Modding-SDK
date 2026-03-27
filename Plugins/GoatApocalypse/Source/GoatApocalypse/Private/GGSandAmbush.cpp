#include "GGSandAmbush.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

AGGSandAmbush::AGGSandAmbush(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->SandMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sand Mesh"));
    this->OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Overlap Sphere"));
    this->NPCSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("NPC Spawn Location"));
    this->NPCClass = NULL;
    this->JumpOutParticle = NULL;
    this->JumpOutSound = NULL;
    this->SpawnedNPC = NULL;
    this->TargetGoat = NULL;
    this->NPCSpawnLocation->SetupAttachment(RootComponent);
    this->OverlapSphere->SetupAttachment(RootComponent);
    this->SandMesh->SetupAttachment(RootComponent);
}

void AGGSandAmbush::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


