#include "GGQuestSet.h"
#include "EQuestProgression.h"

AGGQuestSet::AGGQuestSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressionMode = EQuestProgression::Collection;
    this->QuestProgressTiers.AddDefaulted(1);
}


