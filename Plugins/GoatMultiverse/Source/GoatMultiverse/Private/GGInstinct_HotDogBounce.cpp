#include "GGInstinct_HotDogBounce.h"

AGGInstinct_HotDogBounce::AGGInstinct_HotDogBounce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestProgressTiers.AddDefaulted(1);
}

void AGGInstinct_HotDogBounce::OnGoatChangedMovementMode(TEnumAsByte<EMovementMode> NewMode, TEnumAsByte<EMovementMode> PrevMode, uint8 NewCustomMode, uint8 PrevCustomMode, ULSCharacterMovementComponent* MovementComp) {
}

void AGGInstinct_HotDogBounce::OnAnyBouncableBounced(UGGBouncyStaticMeshComponent* BouncyMesh, AActor* BouncedActor, UPrimitiveComponent* BouncedComponent, FVector BouncedVelocity) {
}


