#include "GGStaticMeshActor.h"
#include "GGStaticMeshComponent.h"

AGGStaticMeshActor::AGGStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGGStaticMeshComponent>(TEXT("StaticMeshComponent0"))) {
    this->bCanBeInCluster = false;
    const FProperty* p_StaticMeshComponent = GetClass()->FindPropertyByName("StaticMeshComponent");
    (*p_StaticMeshComponent->ContainerPtrToValuePtr<UStaticMeshComponent*>(this)) = (UStaticMeshComponent*)RootComponent;
    this->GGStaticMeshComponent = (UGGStaticMeshComponent*)RootComponent;
}


