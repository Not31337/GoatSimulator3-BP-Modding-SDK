#include "GGIcePathPrototype.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AGGIcePathPrototype::AGGIcePathPrototype(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->PathMesh = NULL;
    this->IceMaterial = NULL;
    this->Spline->SetupAttachment(RootComponent);
}


