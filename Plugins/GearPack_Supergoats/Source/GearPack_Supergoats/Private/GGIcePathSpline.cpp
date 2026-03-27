#include "GGIcePathSpline.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AGGIcePathSpline::AGGIcePathSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->PathMesh = NULL;
    this->StartMesh = NULL;
    this->EndMesh = NULL;
    this->SlipperyPhysMat = NULL;
    this->SectionSpawnSoundCue = NULL;
    this->SectionSpawnParticle = NULL;
    this->SectionShatterSoundCue = NULL;
    this->SectionShatterParticle = NULL;
    this->SectionHitSoundCue = NULL;
    this->SectionHitParticle = NULL;
    this->PreShatterParticle = NULL;
    this->DistanceBetweenPoints = 200.00f;
    this->DistanceBetweenFirstPoints = 100.00f;
    this->AboveGroundPlacement = 15.00f;
    this->MaxSections = 50;
    this->TimeUntilSelfDestruction = 180;
    this->SectionSelfDestroyInterval = 1.00f;
    this->OverLimitSelfDestroyInterval = 0.25f;
    this->ValidDamageTypes.AddDefaulted(3);
    this->DefaultSectionMaterial = NULL;
    this->ErosionSectionMaterial = NULL;
    this->ErosionMatDownwards = NULL;
    this->DistanceForInstinct = 10000.00f;
    this->OwnerGoat = NULL;
}

void AGGIcePathSpline::MulticastPlayHitFX_Implementation(const FVector_NetQuantize Location) {
}


void AGGIcePathSpline::ClientInstinctTriggered_Implementation(AGGGoat* Goat) {
}


