#include "GGChristmasLightsSpline.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGChristmasLightsSpline::AGGChristmasLightsSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline Component"));
    this->bShouldSpreadElectricity = true;
    this->bSetupInConstruction = false;
    this->VerticalTangentLengthPerMeter = 10.00f;
    this->HorizontalTangentLengthWhenAttached = 300.00f;
    this->SurfaceNormalTangentLength = 100.00f;
    this->DistanceBetweenLights = 50.00f;
    this->SplineDrawDistance = 10000.00f;
    this->LightMesh = NULL;
    this->SplineComponent = (USplineComponent*)RootComponent;
    this->SplineMeshComponent = CreateDefaultSubobject<USplineMeshComponent>(TEXT("Spline Mesh Component"));
    this->GearMeshComponent = NULL;
    this->SplineMeshComponent->SetupAttachment(RootComponent);
}

void AGGChristmasLightsSpline::OnSplineComponentOverlapBegin(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* PrimitiveComponent1, int32 I, bool bArg, const FHitResult& HitResult) {
}

void AGGChristmasLightsSpline::OnRep_SplineEndPos() {
}

void AGGChristmasLightsSpline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGChristmasLightsSpline, SplineEndPos);
    DOREPLIFETIME(AGGChristmasLightsSpline, GearMeshComponent);
    DOREPLIFETIME(AGGChristmasLightsSpline, GearSocketName);
}


