#include "GGRollercoasterTrainSpawner.h"
#include "Components/SceneComponent.h"

AGGRollercoasterTrainSpawner::AGGRollercoasterTrainSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TrainClassToSpawn = NULL;
}


