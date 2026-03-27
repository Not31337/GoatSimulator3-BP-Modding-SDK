#include "GGLyreProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "EGGProjectileHitResponse.h"

AGGLyreProjectile::AGGLyreProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitResponseNormalTarget = EGGProjectileHitResponse::Destroy;
    this->VisibleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visible Mesh"));
    this->ObjectTypesToSpawnLyreOn.AddDefaulted(1);
    this->MaxImpactAngleToSpawn = 60.00f;
    this->ScaleInterpolationSpeed = 5.00f;
    this->bAlignToSurfaceOnHit = true;
    this->LyreClass = NULL;
    this->VisibleMesh->SetupAttachment(RootComponent);
}


