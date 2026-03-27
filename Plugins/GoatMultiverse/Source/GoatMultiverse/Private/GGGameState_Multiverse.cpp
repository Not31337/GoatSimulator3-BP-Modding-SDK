#include "GGGameState_Multiverse.h"
#include "EGoatDLC.h"
#include "Net/UnrealNetwork.h"

AGGGameState_Multiverse::AGGGameState_Multiverse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssociatedDLC = EGoatDLC::GoatMultiverse;
    this->IntroRiftAsset = NULL;
    this->bShouldPlayMultiverseIntro = false;
    this->bShouldForceManualLoadingScreen = false;
    this->bKidneyStoneEventCompleted = false;
}

void AGGGameState_Multiverse::ResetShouldPlayIntro() {
}

void AGGGameState_Multiverse::ResetShouldForceManualLoadScreen() {
}

void AGGGameState_Multiverse::OnKidneyStoneQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState) {
}

bool AGGGameState_Multiverse::HasPlayedMultiverseIntro() const {
    return false;
}

void AGGGameState_Multiverse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGGameState_Multiverse, bShouldPlayMultiverseIntro);
    DOREPLIFETIME(AGGGameState_Multiverse, bShouldForceManualLoadingScreen);
    DOREPLIFETIME(AGGGameState_Multiverse, bKidneyStoneEventCompleted);
}


