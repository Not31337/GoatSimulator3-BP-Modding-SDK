#include "GGTethermancerContraintComponentHolder.h"

UGGTethermancerContraintComponentHolder::UGGTethermancerContraintComponentHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConstraitMaxDistanceSquared = 25000000.00f;
}

void UGGTethermancerContraintComponentHolder::OnLocalGoatJumpPressed(AGGGoat* Goat) {
}

void UGGTethermancerContraintComponentHolder::OnGoatRequestContraintBreak(AGGGoat* Goat) {
}

TArray<UGGTethermancerContraintComponent*> UGGTethermancerContraintComponentHolder::GetTethermancerConstraintComponents(const UObject* WorldContextObject) {
    return TArray<UGGTethermancerContraintComponent*>();
}


