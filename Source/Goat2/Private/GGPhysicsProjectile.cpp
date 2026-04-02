#include "GGPhysicsProjectile.h"
#include "Components/ArrowComponent.h"
#include "GGPhysicsProjectileMovementComponent.h"
#include "GGStaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AGGPhysicsProjectile::AGGPhysicsProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UGGStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = (UGGStaticMeshComponent*)RootComponent;
    this->ForwardDirectionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ForwardDirectionArrow"));
    this->ProjectileMovement = CreateDefaultSubobject<UGGPhysicsProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->bAddArrowTranslationToSpawnLocation = false;
    this->StickToTargetOffset = 0.00f;
    this->LaunchSound = NULL;
    this->LaunchParticles = NULL;
    this->bIgnoreOwnerWhenMoving = true;
    this->bPlayVehicleImpactSound = true;
    this->bPlayPhysicsActorImpactSound = true;
    this->bSpawnHitParticleAttached = true;
    this->bHitParticleIgnoreHitRotation = false;
    this->bAlignToSurfaceWhenAttached = false;
    this->bDisableCollisionAfterAttaching = true;
    this->HitResponseNormalTarget = EGGProjectileHitResponse::BecomePhysicsActor;
    this->bResolveNormalHitResponseInChildClass = false;
    this->bStayActiveAfterHit = false;
    this->TargetHitSound = NULL;
    this->TargetHitParticles = NULL;
    this->HitResponseSpecialTarget = EGGProjectileHitResponse::Destroy;
    this->bResolveSpecialHitResponseInChildClass = false;
    this->SpecialTargetHitSound = NULL;
    this->SpecialTargetHitParticles = NULL;
    this->bSpecialTargetsAreBlackList = false;
    this->PhysicsActor = NULL;
    this->LaunchAudioComponent = NULL;
    this->LaunchParticlesComponent = NULL;
    this->ForwardDirectionArrow->SetupAttachment(RootComponent);
}

AGGPhysicsProjectile* AGGPhysicsProjectile::SpawnProjectile_K2(FTransform SpawnTransform, const TSubclassOf<AGGPhysicsProjectile>& Class, AActor* ProjectileOwner) {
    return NULL;
}


void AGGPhysicsProjectile::OnRepPhysicsActor() {
}


void AGGPhysicsProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGGPhysicsProjectile::OnAttachedActorDestroyed(AActor* DestroyedActor) {
}

void AGGPhysicsProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPhysicsProjectile, PhysicsActor);
}


