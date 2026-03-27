#include "GGInstinct_TheMissingLink.h"

AGGInstinct_TheMissingLink::AGGInstinct_TheMissingLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
    this->DanceEmote = NULL;
    this->MissingLinkAltGoat = NULL;
}

void AGGInstinct_TheMissingLink::OnNPCReacted(AGGNPC* NPC, FGameplayTag Reaction, AActor* CausedBy, FVector Location) {
}

void AGGInstinct_TheMissingLink::OnMissingLinkEmoted(AGGGoat* EmotingGoat, UGGGoatEmote* Emote) {
}

void AGGInstinct_TheMissingLink::OnInstinctTriggered(AGGGoat* Goat, FGameplayTag InstinctTag) {
}

void AGGInstinct_TheMissingLink::OnAltGoatChanged(AGGGoat* Goat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}


