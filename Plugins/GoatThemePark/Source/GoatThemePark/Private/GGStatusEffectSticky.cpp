#include "GGStatusEffectSticky.h"
#include "EStatusEffectTypes.h"
#include "Net/UnrealNetwork.h"

AGGStatusEffectSticky::AGGStatusEffectSticky(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffectType = EStatusEffectTypes::SET_Sticky;
    this->ValidAffectedActorClasses.AddDefaulted(2);
    this->CanSpread = false;
    this->MinSurfaceAngleToStick = 25.00f;
    this->ParticlesBecomeSticky = NULL;
    this->StickyMesh = NULL;
    this->StickyMeshMaterial = NULL;
    this->StickyMeshParticleSystem = NULL;
    this->LickDistanceToUnstickFromSurface = 300.00f;
    this->HeadbuttCountRequiredToBreakFree = 4;
    this->HeadbuttImpulseWhenStuckToSurface = 1000.00f;
    this->OwnerMeshComponent = NULL;
    this->PhysicsConstraintAttach = NULL;
    this->StickyMeshComponent = NULL;
    this->StickyMeshParticles = NULL;
}

void AGGStatusEffectSticky::ServerOnActorHitSurface_Implementation(FGGStickySurfaceLocation InSurfaceLocation) {
}

void AGGStatusEffectSticky::ServerGoatPressedHeadbuttWhileStuck_Implementation() {
}

void AGGStatusEffectSticky::OnRep_SurfaceLocation() {
}

void AGGStatusEffectSticky::OnLocalGoatPressedHeadbutt(AGGPlayerController* PlayerController) {
}

void AGGStatusEffectSticky::OnActorHitSomething(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGGStatusEffectSticky::MulticastPlayStickToSurfaceVFX_Implementation(FVector Location, FRotator Rotation) {
}

void AGGStatusEffectSticky::MulticastPlayRemoveFromSurfaceVFX_Implementation(FVector Location, FRotator Rotation) {
}

void AGGStatusEffectSticky::MulticastPlayHeadbuttEffectWhileStuck_Implementation() {
}

void AGGStatusEffectSticky::MulticastActorLickedFromSurface_Implementation(AActor* Actor, AGGGoat* Goat) {
}

void AGGStatusEffectSticky::ClientSetSurfaceLocation_Implementation(FGGStickySurfaceLocation InSurfaceLocation) {
}

void AGGStatusEffectSticky::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGStatusEffectSticky, SurfaceLocation);
}


