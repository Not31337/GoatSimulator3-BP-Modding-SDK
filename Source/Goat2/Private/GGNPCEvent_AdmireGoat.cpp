#include "GGNPCEvent_AdmireGoat.h"
#include "EEventType.h"

AGGNPCEvent_AdmireGoat::AGGNPCEvent_AdmireGoat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventType = EEventType::ET_Dynamic;
    this->bRemoveLovingNPCs = false;
    this->SpreadRadiusInitial = 400.00f;
    this->SpreadRadiusMax = 750.00f;
    this->SpreadRadiusIncrease = 50.00f;
    this->DurationMax = 20.00f;
    this->DurationIncrease = 5.00f;
    this->ChanceToJoinEvent = 70;
    this->ReactionCooldownWhenLeaving = 15.00f;
    this->bDebug = false;
    this->TargetGoat = NULL;
}

void AGGNPCEvent_AdmireGoat::SpreadEventInRadius() {
}

void AGGNPCEvent_AdmireGoat::OnTrickCompleted(AGGGoat* Goat, const FString& TrickName) {
}

void AGGNPCEvent_AdmireGoat::OnGoatEmoteStarted(AGGGoat* Goat, UGGGoatEmote* Emote) {
}

void AGGNPCEvent_AdmireGoat::OnGoatBaa(AGGGoat* GoatBaaing) {
}

AGGGoat* AGGNPCEvent_AdmireGoat::GetAdmireGoat() const {
    return NULL;
}


