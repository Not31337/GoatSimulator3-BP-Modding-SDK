#include "GGGoatGear_Feet_AntiGravityField.h"

UGGGoatGear_Feet_AntiGravityField::UGGGoatGear_Feet_AntiGravityField(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GravityFieldActorClass = NULL;
}

void UGGGoatGear_Feet_AntiGravityField::SpawnFieldActor_Implementation(FVector Location, FRotator Rotation, FVector BoxExtents) {
}



bool UGGGoatGear_Feet_AntiGravityField::HasFieldActor() {
    return false;
}

void UGGGoatGear_Feet_AntiGravityField::DeleteFieldActors_Implementation() {
}


