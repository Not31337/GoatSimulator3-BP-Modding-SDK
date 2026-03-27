#include "UBTService_GGDefendArea.h"

UUBTService_GGDefendArea::UUBTService_GGDefendArea() {
    this->NoticeBehaviour = ENoticeBehaviour::Everywhere;
    this->SurroundingAreaDistance = 200.00f;
    this->CloseEnoughDistance = 100.00f;
    this->ChaseDistanceFromGuardedArea = 1000.00f;
    this->bNoticeChangesWhenAway = true;
    this->AIOwner = NULL;
    this->BlackboardComponent = NULL;
}

void UUBTService_GGDefendArea::OnStolenActorDestroyed(AActor* DestroyedActor) {
}

void UUBTService_GGDefendArea::OnProtectedActorLicked(AActor* LickedActor, AGGGoat* LickingGoat) {
}

void UUBTService_GGDefendArea::OnProtectedActorHeadbutted(UObject* HeadbuttedObject, AGGGoat* HeadbuttingGoat) {
}


