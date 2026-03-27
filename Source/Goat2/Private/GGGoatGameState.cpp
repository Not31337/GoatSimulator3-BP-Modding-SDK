#include "GGGoatGameState.h"
#include "GGQuestManager.h"
#include "GGRadarSystem.h"

AGGGoatGameState::AGGGoatGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssociatedDLC = EGoatDLC::Invalid;
    this->QuestManager = CreateDefaultSubobject<UGGQuestManager>(TEXT("QuestManager"));
    this->RadarSystem = CreateDefaultSubobject<UGGRadarSystem>(TEXT("RadarSystem"));
    this->SoundStartDialogue = NULL;
    this->SoundStartDialogueLine = NULL;
    this->SoundEndDialogue = NULL;
}

bool AGGGoatGameState::IsInAssociatedDLCLevel() {
    return false;
}

FGameplayTag AGGGoatGameState::GetGearDLCDescriptorTag() const {
    return FGameplayTag{};
}

EGoatDLC AGGGoatGameState::GetAssociatedDLC() const {
    return EGoatDLC::Invalid;
}


