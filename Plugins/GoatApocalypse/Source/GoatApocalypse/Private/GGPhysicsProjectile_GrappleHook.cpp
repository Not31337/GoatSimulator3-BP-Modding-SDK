#include "GGPhysicsProjectile_GrappleHook.h"
#include "CableComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Net/UnrealNetwork.h"

AGGPhysicsProjectile_GrappleHook::AGGPhysicsProjectile_GrappleHook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bResolveNormalHitResponseInChildClass = true;
    this->bResolveSpecialHitResponseInChildClass = true;
    this->MaxDistanceTravel = 1500.00f;
    this->ReturnDropDistance = 400.00f;
    this->HookAcceleration = 1000.00f;
    this->HitSomethingStaticSound = NULL;
    this->HitGrabbableTargetSound = NULL;
    this->ReachedMaxLengthSound = NULL;
    this->HitSomethingStaticParticle = NULL;
    this->HitGrabbableTargetParticle = NULL;
    this->ReachedMaxLengthParticle = NULL;
    this->HitSomethingStaticNiagaraParticle = NULL;
    this->HitGrabbableTargetNiagaraParticle = NULL;
    this->ReachedMaxLengthNiagaraParticle = NULL;
    this->PhysicsHandleComponent = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));
    this->CableComponent = CreateDefaultSubobject<UCableComponent>(TEXT("CableComponent"));
    this->GrappleHookGear = NULL;
    this->CableComponent->SetupAttachment(RootComponent);
}

void AGGPhysicsProjectile_GrappleHook::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPhysicsProjectile_GrappleHook, StartLocation);
    DOREPLIFETIME(AGGPhysicsProjectile_GrappleHook, GrappleHookGear);
}


