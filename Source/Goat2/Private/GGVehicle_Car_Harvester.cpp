#include "GGVehicle_Car_Harvester.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGVehicle_Car_Harvester::AGGVehicle_Car_Harvester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ValidDriverTypes.AddDefaulted(3);
    this->ValidDamageTypes.AddDefaulted(6);
    this->bCanDoFadeIn = false;
    this->HarvesterFront = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Harvester Front"));
    this->HarvesterSpinner = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Harvester Spinner"));
    this->HarvesterBack = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Harvester Back"));
    this->SpinnerRotatingComponent = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("Spinner Rotating Comp"));
    this->SpinnerAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Spinner Audio Comp"));
    this->HarvestBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Harvest Box"));
    this->FrontOverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Front Overlap Box"));
    this->ShredsSprayParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Shreds Spray Particle Comp"));
    this->bFrontPartsShownFromStart = false;
    this->ShredParticle = NULL;
    this->ShredSound = NULL;
    this->GoatPhysAssetOverride = NULL;
    this->VehiclePower = 20000.00f;
    this->SprayOnFor = 2.00f;
    this->bIsOn = false;
    this->bIsSprayOn = false;
    this->bFrontPartsHidden = true;
    this->FrontOverlapBox->SetupAttachment(RootComponent);
    this->HarvestBox->SetupAttachment(RootComponent);
    this->HarvesterBack->SetupAttachment(RootComponent);
    this->HarvesterFront->SetupAttachment(RootComponent);
    this->HarvesterSpinner->SetupAttachment(RootComponent);
    this->SpinnerAudioComponent->SetupAttachment(RootComponent);
}

void AGGVehicle_Car_Harvester::TurnOffSpray() {
}

void AGGVehicle_Car_Harvester::SetHarvesterActive(bool NewOn) {
}

void AGGVehicle_Car_Harvester::OnRep_IsSprayOn() {
}

void AGGVehicle_Car_Harvester::OnRep_IsOn() {
}

void AGGVehicle_Car_Harvester::OnRep_FrontPartsHidden() {
}

void AGGVehicle_Car_Harvester::MulticastPlayShredEffect_Implementation(FVector_NetQuantize Location) {
}

void AGGVehicle_Car_Harvester::HideFrontParts(bool bShouldHideParts) {
}

void AGGVehicle_Car_Harvester::HarvestOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGGVehicle_Car_Harvester::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGVehicle_Car_Harvester, bIsOn);
    DOREPLIFETIME(AGGVehicle_Car_Harvester, bIsSprayOn);
    DOREPLIFETIME(AGGVehicle_Car_Harvester, bFrontPartsHidden);
}


