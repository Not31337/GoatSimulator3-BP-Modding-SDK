#include "BTService_GGPoliceScan.h"

UBTService_GGPoliceScan::UBTService_GGPoliceScan() {
    this->NodeName = TEXT("Police Scan");
    this->ScanRadius = 1000.00f;
    this->ChanceToSetGoatTarget = 100;
    this->ChanceToSetNPCTarget = 100;
    this->bDrawScan = false;
    this->OwnerActor = NULL;
    this->Blackboard = NULL;
}

void UBTService_GGPoliceScan::OnNPCAttackedActors(AGGNPC* NPCAttacking, const TArray<AActor*>& AttackedActors) {
}

void UBTService_GGPoliceScan::OnGoatHeadbutting(AGGGoat* GoatHeadbutting, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt) {
}


