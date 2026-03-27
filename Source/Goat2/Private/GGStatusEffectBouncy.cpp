#include "GGStatusEffectBouncy.h"
#include "EStatusEffectTypes.h"
#include "Net/UnrealNetwork.h"

AGGStatusEffectBouncy::AGGStatusEffectBouncy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffectType = EStatusEffectTypes::SET_Bouncy;
    this->CreateOverlapShapes = false;
    this->SpreadStatusEffectType = EStatusEffectTypes::SET_Bouncy;
    this->StartParticle = NULL;
    this->StartBouncySplatSound = NULL;
    this->StopBouncySound = NULL;
    this->GoatJumpHeightMultiplier = 3.00f;
    this->bOpaqueMaterialVersion = true;
    this->SecondaryShellEffectMaterial = NULL;
    this->GoatShellEffectMaterial = NULL;
    this->NPCShellEffectMaterial = NULL;
    this->VehicleShellEffectMaterial = NULL;
    this->PActorShellEffectMaterial = NULL;
    this->ShellEffectComp = NULL;
    this->FadeToInactiveDuration = 10.00f;
    this->ActivePercentage = 0;
    this->CharacterMeshAngularDampening = 20.00f;
    this->InitialSelfImpulseForce = 300.00f;
    this->ImpulseForce = 500.00f;
    this->VehicleImpulseForce = 1000.00f;
    this->NPCImpulseForce = 9000.00f;
    this->ImpulseMinForRelevant = 50.00f;
    this->BounceMinDelay = 0.40f;
    this->VehicleBounceMinDelay = 0.40f;
    this->DecalLifespan = 3.00f;
    this->EffectDelay = 0.50f;
    this->ImpactSound = NULL;
}

void AGGStatusEffectBouncy::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void AGGStatusEffectBouncy::OnRep_ActivePercentage() {
}

void AGGStatusEffectBouncy::OnHitMesh(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

bool AGGStatusEffectBouncy::IsFadedOut() const {
    return false;
}


void AGGStatusEffectBouncy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGStatusEffectBouncy, ActivePercentage);
}


