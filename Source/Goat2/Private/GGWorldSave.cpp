#include "GGWorldSave.h"

UGGWorldSave::UGGWorldSave() {
    this->ChaosTokensCollected = 0;
    this->UnlockedCastleStretchgoals = 0;
}

FGuid UGGWorldSave::GetWorldIdentifier() {
    return FGuid{};
}

TArray<FString> UGGWorldSave::GetCollectedSourceIDs() {
    return TArray<FString>();
}

bool UGGWorldSave::AddChaosToTotal(uint32 ChaosToAdd, const FString& AcquisitionID, bool bAllowRecurring) {
    return false;
}


