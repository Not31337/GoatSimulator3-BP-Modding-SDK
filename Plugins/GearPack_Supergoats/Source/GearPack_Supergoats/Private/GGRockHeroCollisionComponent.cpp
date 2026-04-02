#include "GGRockHeroCollisionComponent.h"

UGGRockHeroCollisionComponent::UGGRockHeroCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->bEnableExplosions = false;
    this->ExplosionEffect = NULL;
    this->ImpulseSound = NULL;
    this->ExplosionRadius = 100.00f;
    this->CharacterExplosionForce = 1300.00f;
    this->ExplosionForce = 40000.00f;
    this->ExplosionCameraShake = NULL;
    this->CameraShakeRadius = 1200.00f;
    this->ActorImpulseCooldown = 0.20f;
}




void UGGRockHeroCollisionComponent::OnComponentHitCallback(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGRockHeroCollisionComponent::OnCapsuleComponentHitCallback(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGRockHeroCollisionComponent::ExplodeActor(AActor* OtherActor, const FHitResult& Hit) {
}


