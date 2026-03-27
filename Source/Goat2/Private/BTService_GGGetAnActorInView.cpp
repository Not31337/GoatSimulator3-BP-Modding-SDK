#include "BTService_GGGetAnActorInView.h"

UBTService_GGGetAnActorInView::UBTService_GGGetAnActorInView() {
    this->NodeName = TEXT("Get An Actor In View");
    this->OnlyLookWhenEmpty = true;
    this->OnlyLookWhileInMood = EMoods::M_None;
    this->WithinDistance = 0.00f;
    this->RandomActorInView = true;
    this->ChanceToSetActor = 100;
    this->bCheckAgainstRecentlyGrabbed = false;
    this->RecentlyGrabbedDelay = 5.00f;
    this->bDisregardGrabbedCharacters = true;
    this->LookForNPCs = false;
    this->OnlyLookForRoaming = false;
    this->OnlyLookForPassedOut = false;
    this->IncludeKnockedOutNPCs = false;
    this->IncludeNPCsInEvents = true;
    this->LookForGoats = false;
    this->LookForPhysicsActors = false;
    this->CanGetPActorsTwice = false;
    this->LookForInteractables = false;
    this->LookForVehicles = false;
    this->OnlyEngineOff = false;
}


