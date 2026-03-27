#include "GGMiniGamePlayerComp_CarRace.h"
#include "Net/UnrealNetwork.h"

UGGMiniGamePlayerComp_CarRace::UGGMiniGamePlayerComp_CarRace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumberOfRoundsFinished = 0;
    this->NumberOfTotalRounds = 1;
    this->LastCheckpointOverlapped = -1;
    this->CheckpointPath = NULL;
    this->OwnerVehicle = NULL;
}

void UGGMiniGamePlayerComp_CarRace::SetCheckpointPath(AGGPlayerGame_Race_CheckpointPath* NewCheckpointPath) {
}

void UGGMiniGamePlayerComp_CarRace::OnRep_CheckpointPath() {
}

void UGGMiniGamePlayerComp_CarRace::OnCheckpointCrossed(AActor* CheckPoint, AGGVehicle* Vehicle, int32 CheckPointNumber) {
}

bool UGGMiniGamePlayerComp_CarRace::HasFinishedAllRounds() const {
    return false;
}

bool UGGMiniGamePlayerComp_CarRace::HasCrossedAllCheckpoints() const {
    return false;
}

void UGGMiniGamePlayerComp_CarRace::HandleCompletedRound() {
}

AActor* UGGMiniGamePlayerComp_CarRace::GetNextCheckpoint() const {
    return NULL;
}

void UGGMiniGamePlayerComp_CarRace::ClientHandleCompletedRound_Implementation() {
}

void UGGMiniGamePlayerComp_CarRace::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGMiniGamePlayerComp_CarRace, NumberOfRoundsFinished);
    DOREPLIFETIME(UGGMiniGamePlayerComp_CarRace, NumberOfTotalRounds);
    DOREPLIFETIME(UGGMiniGamePlayerComp_CarRace, LastCheckpointOverlapped);
    DOREPLIFETIME(UGGMiniGamePlayerComp_CarRace, CheckpointPath);
}


