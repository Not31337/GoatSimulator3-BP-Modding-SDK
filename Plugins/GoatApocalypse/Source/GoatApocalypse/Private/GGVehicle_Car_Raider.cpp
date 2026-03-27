#include "GGVehicle_Car_Raider.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AGGVehicle_Car_Raider::AGGVehicle_Car_Raider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ValidDriverTypes.AddDefaulted(3);
    this->ValidDamageTypes.AddDefaulted(6);
    this->RaiderSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Raider Scene Component"));
    this->FireParticleComponent1 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fire Particle Component 1"));
    this->FireParticleComponent2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fire Particle Component 2"));
    this->RaiderClass = NULL;
    this->RidersToSpawnMax = 1;
    this->bSpawnRaiderInBeginPlay = false;
    this->CurrentTargetActor = NULL;
    this->NPCOnCar = NULL;
    this->FireParticleComponent1->SetupAttachment(RootComponent);
    this->FireParticleComponent2->SetupAttachment(RootComponent);
    this->RaiderSceneComponent->SetupAttachment(RootComponent);
}

void AGGVehicle_Car_Raider::OnNPCAttachmentStateChanged(USceneComponent* Component) {
}

void AGGVehicle_Car_Raider::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGVehicle_Car_Raider, RaidersOnCar);
}


