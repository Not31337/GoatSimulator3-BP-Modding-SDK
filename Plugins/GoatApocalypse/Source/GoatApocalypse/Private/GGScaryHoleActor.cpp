#include "GGScaryHoleActor.h"

AGGScaryHoleActor::AGGScaryHoleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bIsForGear = false;
    this->SpawnedByPlayer = NULL;
}


