#include "GGWaterCurrentSpline.h"
#include "Components/BillboardComponent.h"
#include "Components/SplineComponent.h"

AGGWaterCurrentSpline::AGGWaterCurrentSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Current Spline"));
    this->CurrentSpline = (USplineComponent*)RootComponent;
    this->SplineBillboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Spline Billboard"));
    this->bCurrentEnabled = true;
    this->CurrentSize = 300.00f;
    this->Force_Character = 700.00f;
    this->Force_CharacterRagdoll = 500.00f;
    this->Force_PActor = 5500.00f;
    this->Force_Vehicle = 300000.00f;
    this->bPullInwards = true;
    this->PullInwardsIfOutside = 100.00f;
    this->InwardsForce_Character = 600.00f;
    this->InwardsForce_CharacterRagdoll = 400.00f;
    this->InwardsForce_PActor = 3000.00f;
    this->InwardsForce_Vehicle = 150000.00f;
    this->SplineBillboard->SetupAttachment(RootComponent);
}

bool AGGWaterCurrentSpline::IsLocationInsideCurrent(FVector Location) const {
    return false;
}

USplineComponent* AGGWaterCurrentSpline::GetSpline() const {
    return NULL;
}


