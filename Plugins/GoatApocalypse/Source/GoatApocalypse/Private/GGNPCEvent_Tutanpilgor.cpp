#include "GGNPCEvent_Tutanpilgor.h"
#include "EEventType.h"

AGGNPCEvent_Tutanpilgor::AGGNPCEvent_Tutanpilgor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventType = EEventType::ET_Dynamic;
    this->bRemovePanickedNPCs = true;
    this->bRemovePassedOutNPCs = true;
    this->SpreadRadius = 800.00f;
    this->OrphanTimeUntilAbort = 10.00f;
    this->HumanPetAnimBlueprint = NULL;
    this->TargetSkeleton = NULL;
    this->HeadbuttMontage = NULL;
    this->NPCCountForInstinct = 15;
    this->TutanpilgorGoat = NULL;
}

void AGGNPCEvent_Tutanpilgor::SpreadEventInRadius() {
}

void AGGNPCEvent_Tutanpilgor::OnGoatBaaing(AGGGoat* GoatBaaing) {
}

void AGGNPCEvent_Tutanpilgor::OnEmotingEnd(AGGGoat* EmotingGoat, UGGGoatEmote* Emote, bool bInterrupted) {
}

void AGGNPCEvent_Tutanpilgor::OnEmoting(AGGGoat* EmotingGoat, UGGGoatEmote* Emote) {
}


