#include "GGIncrementalSpawner.h"

UGGIncrementalSpawner::UGGIncrementalSpawner() {
}

bool UGGIncrementalSpawner::SpawnActorIncremental(UObject* WorldContextObject, FSpawnParams& SpawnParams, const FOnIncrementalSpawnActorDelegate& FailedDelegate, const FOnIncrementalSpawnActorDelegate& BeforeFinishDelegate, const FOnIncrementalSpawnActorDelegate& AfterFinishDelegate) {
    return false;
}

bool UGGIncrementalSpawner::DestroyActorIncremental(UObject* WorldContextObject, AActor* Actor, bool bNetForce, bool bShouldModifyLevel) {
    return false;
}


