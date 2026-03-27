#include "GGPlayerGameComp_GoatKart.h"

UGGPlayerGameComp_GoatKart::UGGPlayerGameComp_GoatKart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldEndGameWhenFirstPlayerFinishes = false;
    this->IsSprint = false;
    this->MaxLapsAroundCircuit = 0;
}

void UGGPlayerGameComp_GoatKart::SetFullCircuit(const USplineComponent* TrackSpline) {
}

void UGGPlayerGameComp_GoatKart::PlayerPerformedLap_Implementation(AGGGoat* Goat, int32 LapsPerformed) {
}

void UGGPlayerGameComp_GoatKart::PlayerCrossedPoint_Implementation(AGGGoat* Goat) {
}

bool UGGPlayerGameComp_GoatKart::HasPlayerFinishedRace_Implementation(AGGGoat* Goat) const {
    return false;
}

AGGPlayerGame_Base* UGGPlayerGameComp_GoatKart::GetOwnerPlayerGame() const {
    return NULL;
}


