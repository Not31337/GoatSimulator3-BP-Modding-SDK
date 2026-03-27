#include "GGMiniGamePlayerComp_GoatKart.h"
#include "Net/UnrealNetwork.h"

UGGMiniGamePlayerComp_GoatKart::UGGMiniGamePlayerComp_GoatKart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerGameComp = NULL;
    this->PlayerGame = NULL;
    this->CurrentCircuitPoint = 1;
    this->LapsAroundCircuit = 0;
}

void UGGMiniGamePlayerComp_GoatKart::ServerReplicateRaceState_Implementation(int32 InCurrentCircuitPoint, int32 InLapsAroundCircuit) {
}

void UGGMiniGamePlayerComp_GoatKart::PlayerPerformedLap_Implementation() {
}

void UGGMiniGamePlayerComp_GoatKart::PlayerCrossedPoint_Implementation() {
}

bool UGGMiniGamePlayerComp_GoatKart::HasPlayerFinishedRace_Implementation() const {
    return false;
}

int32 UGGMiniGamePlayerComp_GoatKart::GetPreviousCheckpoint() const {
    return 0;
}

bool UGGMiniGamePlayerComp_GoatKart::GetPositionInRace(int32& OutPosition, int32& OutParticipants) const {
    return false;
}

void UGGMiniGamePlayerComp_GoatKart::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGMiniGamePlayerComp_GoatKart, CurrentCircuitPoint);
    DOREPLIFETIME(UGGMiniGamePlayerComp_GoatKart, LapsAroundCircuit);
}


