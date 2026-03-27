#include "GGChristmasLightsSplineEndPoint.h"
#include "Components/SphereComponent.h"

AGGChristmasLightsSplineEndPoint::AGGChristmasLightsSplineEndPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Sphere"));
}


