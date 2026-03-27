#include "GGDestructibleStatics.h"

UGGDestructibleStatics::UGGDestructibleStatics() {
}

void UGGDestructibleStatics::SpawnDestructibleEffects(AActor* ActorBeingDestroyed, UStaticMesh* StaticMesh, FTransform DestructibleTransform, FBoxSphereBounds DestructibleBounds, FGGDestructibleInfo DestructibleInfo, FVector Impulse) {
}

void UGGDestructibleStatics::DestroyInstancedDestructible(AActor* ActorBeingDestroyed, UInstancedStaticMeshComponent* InstancedMeshComponent, FGGDestructibleInfo DestructibleInfo, FVector Impulse, int32 InstanceIndex, bool bDestroyActor) {
}

void UGGDestructibleStatics::DestroyDestructible(AActor* ActorBeingDestroyed, UStaticMeshComponent* MeshComponent, FGGDestructibleInfo DestructibleInfo, FVector Impulse, bool bDestroyActor) {
}

UGGDestructibleInfoObject* UGGDestructibleStatics::CreateDestructibleInfoObject(FGGDestructibleInfo DestructibleInfo, bool bLoadMeshes) {
    return NULL;
}

bool UGGDestructibleStatics::CanBreakByImpact(FVector Impulse, FGGDestructibleInfo DestructibleInfo) {
    return false;
}

bool UGGDestructibleStatics::CanBreakByDamage(float DamageAmount, FGGDestructibleInfo DestructibleInfo, FImpulseDamageEvent ImpulseDamageEvent, UObject* ObjectContext) {
    return false;
}


