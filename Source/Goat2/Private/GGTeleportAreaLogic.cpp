#include "GGTeleportAreaLogic.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AGGTeleportAreaLogic::AGGTeleportAreaLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->bUseCheckpoints = false;
    this->bCanEverGoBackwards = false;
    this->CurrentAreaAsset = NULL;
    this->DefaultMainEntrance = NULL;
}

void AGGTeleportAreaLogic::SetCurrentCheckpoint_Name(const FString& CheckpointName) {
}

void AGGTeleportAreaLogic::SetCurrentCheckpoint_Index(int32 Index) {
}

void AGGTeleportAreaLogic::OnVehiclePooledOrMoved(AGGVehicle* Vehicle, bool bWasPooled) {
}

void AGGTeleportAreaLogic::OnRep_PlayerStatesInArea() {
}

void AGGTeleportAreaLogic::OnNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled) {
}

void AGGTeleportAreaLogic::OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


void AGGTeleportAreaLogic::MulticastPlayerStartingToExitArea_Implementation(AGGPlayerState* Player) {
}

void AGGTeleportAreaLogic::MulticastAllAreaLevelsLoaded_Implementation(UGGTeleportAreaDataAsset* AreaAsset, int32 Slot) {
}

bool AGGTeleportAreaLogic::IsAllPlayersInArea() const {
    return false;
}

bool AGGTeleportAreaLogic::HasReachedACheckpoint() const {
    return false;
}

TArray<AGGPlayerState*> AGGTeleportAreaLogic::GetPlayerStatesInArea() {
    return TArray<AGGPlayerState*>();
}

TArray<AGGPlayerController*> AGGTeleportAreaLogic::GetPlayersInArea() {
    return TArray<AGGPlayerController*>();
}

FAreaCheckpoint AGGTeleportAreaLogic::GetCurrentCheckpoint() const {
    return FAreaCheckpoint{};
}

int32 AGGTeleportAreaLogic::GetAreaSlot() const {
    return 0;
}

UGGTeleportAreaDataAsset* AGGTeleportAreaLogic::GetAreaAsset() const {
    return NULL;
}

void AGGTeleportAreaLogic::ClearCurrentCheckpoint() {
}







void AGGTeleportAreaLogic::AddRuntimeSpawnedActor(AActor* Actor) {
}

void AGGTeleportAreaLogic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGTeleportAreaLogic, CurrentCheckpoint);
    DOREPLIFETIME(AGGTeleportAreaLogic, PlayerStatesInArea);
}


