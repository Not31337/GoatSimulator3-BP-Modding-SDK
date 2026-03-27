#include "GGCollision.h"

UGGCollision::UGGCollision() {
}

FVector UGGCollision::FindFreeLocationForCapsule_K2(const UObject* WorldContext, float HalfHeight, float Radius, TEnumAsByte<ECollisionChannel> CollisionChannel, FVector TargetLocation, FRotator TargetRotation, AActor* OptTestActor) {
    return FVector{};
}

FVector UGGCollision::FindFreeLocationForActor_K2(const AActor* TestActor, FVector TargetLocation, FRotator TargetRotation, FVector AtScale) {
    return FVector{};
}


