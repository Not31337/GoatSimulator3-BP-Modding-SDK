#include "GGTowCableActor.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AGGTowCableActor::AGGTowCableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->TowCable = NULL;
    this->TowPhysHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("Tow Phys Handle"));
    this->HookClass = NULL;
    this->RetractSpeed = 20.00f;
    this->DistanceBehindVehicle = 100.00f;
    this->CableLength = 100.00f;
    this->TimeBeforeRetract = 1.50f;
    this->CharacterInterpSpeed = 5.00f;
    this->VehicleTargetLocUp = 100.00f;
    this->MaxHookDistance = 5000.00f;
    this->CableMaterial = NULL;
    this->OwnerVehicle = NULL;
    this->AttachedToActor = NULL;
    this->AttachedToCharacter = NULL;
    this->AttachedToVehicle = NULL;
    this->TowAttachmentMeshComp = NULL;
    this->HookMeshComp = NULL;
}

void AGGTowCableActor::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGTowCableActor::OnRep_HookElement() {
}

void AGGTowCableActor::OnHookHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGGTowCableActor::HookedVehiclePooledOrMoved(AGGVehicle* Vehicle, bool bWasPooled) {
}

void AGGTowCableActor::HookedNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled) {
}

void AGGTowCableActor::HookedCharacterRespawned(AGGCharacter* Character) {
}

void AGGTowCableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGTowCableActor, HookElement);
}


