#include "GGGoatGear_Static_PowerFist.h"

UGGGoatGear_Static_PowerFist::UGGGoatGear_Static_PowerFist(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasPassiveEffect = true;
    this->HighlightDistance = 200.00f;
    this->NPCsForInstinct = 3;
    this->TargetOverlayWidget = NULL;
    this->PSHitTarget = NULL;
    this->PSGearBurst = NULL;
    this->HighlightRangeSphere = NULL;
}

void UGGGoatGear_Static_PowerFist::OnHighlightRangeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UGGGoatGear_Static_PowerFist::OnHighlightRangeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UGGGoatGear_Static_PowerFist::OnGoatHeadbutted(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}


