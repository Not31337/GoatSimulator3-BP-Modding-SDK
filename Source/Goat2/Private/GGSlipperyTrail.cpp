#include "GGSlipperyTrail.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GGParticleSplineComponent.h"
#include "GGStatusEffectSourceComponent.h"
#include "Net/UnrealNetwork.h"

AGGSlipperyTrail::AGGSlipperyTrail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UGGParticleSplineComponent>(TEXT("Spline Component"));
    this->SplineComponent = (UGGParticleSplineComponent*)RootComponent;
    this->StatusSourceComponent = CreateDefaultSubobject<UGGStatusEffectSourceComponent>(TEXT("Status Source Component"));
    this->FireParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fire Particle Component"));
    this->FireAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Fire Audio Component"));
    this->bSpreadSlipperyOnOverlap = true;
    this->SpecificSlipperyToSpread = NULL;
    this->bCanBeSetOnFire = true;
    this->SectionLifetime = 10.00f;
    this->SectionToSectionSpreadDelay = 0.50f;
    this->bDestroyActorAfterFadeout = false;
    this->RequiredDistanceForSound = 1500.00f;
    this->OverlapMesh = NULL;
    this->DecalMaterial = NULL;
    this->ParticleSpawnPerSection = 20.00f;
    this->FireAudioComponent->SetupAttachment(RootComponent);
    this->FireParticleComponent->SetupAttachment(RootComponent);
}

void AGGSlipperyTrail::OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGSlipperyTrail::OnRep_PointLocations() {
}

void AGGSlipperyTrail::OnRep_AlteredSections() {
}

void AGGSlipperyTrail::OnOtherSpreadToComponent(EStatusEffectTypes SpreadType, AActor* OwnerActor, UGGStatusEffectSourceComponent* SourceComponent, UPrimitiveComponent* SpreadToComponent) {
}

void AGGSlipperyTrail::CreateNewSplinePoint(FVector Location) {
}

void AGGSlipperyTrail::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGSlipperyTrail, PointLocations);
    DOREPLIFETIME(AGGSlipperyTrail, AlteredSections);
}


