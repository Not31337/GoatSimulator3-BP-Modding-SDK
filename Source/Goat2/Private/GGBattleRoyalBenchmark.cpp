#include "GGBattleRoyalBenchmark.h"

AGGBattleRoyalBenchmark::AGGBattleRoyalBenchmark(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->FPSTarget = 1;
    this->bStartOnBeginPlay = true;
    this->StartDelay = 1.00f;
}

void AGGBattleRoyalBenchmark::StopBenchmark() {
}

void AGGBattleRoyalBenchmark::StartBenchmark() {
}


