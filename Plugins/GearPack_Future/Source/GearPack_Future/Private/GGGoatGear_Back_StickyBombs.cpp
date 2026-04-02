#include "GGGoatGear_Back_StickyBombs.h"

UGGGoatGear_Back_StickyBombs::UGGGoatGear_Back_StickyBombs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlobMesh = NULL;
    this->BlobAnimInstance = NULL;
}

void UGGGoatGear_Back_StickyBombs::MulticastPlayLaunchEffect_Implementation(const FGGEffectSpawnHolder& Effect, FName Socket, UAnimMontage* LaunchAnimation, float Cooldown) {
}


