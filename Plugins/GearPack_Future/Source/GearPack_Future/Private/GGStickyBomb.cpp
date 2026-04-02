#include "GGStickyBomb.h"
#include "Components/AudioComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EGGProjectileHitResponse.h"

AGGStickyBomb::AGGStickyBomb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::Destroy;
    this->HitResponseSpecialTarget = EGGProjectileHitResponse::StickToTarget;
    this->ExplosionRadius = 300.00f;
    this->Impulse = 1500.00f;
    this->ImpulseVehicles = 3000.00f;
    this->ImpulseVerticalComponent = 0.50f;
    this->TimeToScaleUp = 1.00f;
    this->ScalingUpEasingFunction = EEasingFunc::EaseInOut;
    this->RotationDuration = 0.50f;
    this->ViewDistance = 500.00f;
    this->RotationUpEasingFunction = EEasingFunc::EaseOut;
    this->AttachedMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Attached Mesh"));
    this->PassiveSound = CreateDefaultSubobject<UAudioComponent>(TEXT("Passive Sound"));
    this->ViewTarget = NULL;
    this->AttachedMesh->SetupAttachment(RootComponent);
    this->PassiveSound->SetupAttachment(RootComponent);
}


