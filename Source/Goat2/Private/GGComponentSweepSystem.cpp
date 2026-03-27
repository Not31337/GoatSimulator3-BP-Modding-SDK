#include "GGComponentSweepSystem.h"

UGGComponentSweepSystem::UGGComponentSweepSystem() {
}

bool UGGComponentSweepSystem::RemoveComponentFromSweeping(UPrimitiveComponent* PrimComp) {
    return false;
}

void UGGComponentSweepSystem::OnOverlappingActorDestroyed(AActor* DestroyedActor) {
}

UGGComponentSweepSystem* UGGComponentSweepSystem::AddComponentToSweep_K2(UPrimitiveComponent* PrimComp, const TArray<AActor*>& IgnoredActors, EUniqueOverlapType OverlapType, bool bIgnoreOwner, bool bIgnoreNonDamageableActors, float OverlapEventTickInterval) {
    return NULL;
}


