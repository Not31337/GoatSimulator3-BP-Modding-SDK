#include "GGVehicle_Motorcycle.h"
#include "Components/AudioComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "EVehicleType.h"
#include "GGVehicleTrailParticles.h"
#include "GGMotorcycleMovementComponent.h"
#include "GGVehicleCustomizationComponent.h"
#include "GGVehicleEngineComponent.h"
#include "Net/UnrealNetwork.h"

AGGVehicle_Motorcycle::AGGVehicle_Motorcycle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->VehicleType = EVehicleType::VT_Motorcycle;
    this->ValidDriverTypes.AddDefaulted(3);
    this->ValidDamageTypes.AddDefaulted(6);
    this->bAlignCameraWithVehiclePitch = false;
    this->MotorcycleMovement = CreateDefaultSubobject<UGGMotorcycleMovementComponent>(TEXT("Vehicle Movement"));
    this->VehicleCustomization = CreateDefaultSubobject<UGGVehicleCustomizationComponent>(TEXT("Vehicle Customization"));
    this->ExhaustParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Exhaust Particle"));
    this->BurnoutParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Burnout Particles"));
    this->BurnoutAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Burnout Audio"));
    this->VehicleEngine = CreateDefaultSubobject<UGGVehicleEngineComponent>(TEXT("Vehicle Engine"));
    this->TrailParticles = CreateDefaultSubobject<UGGVehicleTrailParticles>(TEXT("Trail Particles"));
    this->LeftStand = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Left Stand"));
    this->RightStand = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Right Stand"));
    this->AirStabilizationDelay = 1.00f;
    this->LandedEffectsVelocityThreshold = 100.00f;
    this->BodyBoneSimulated = TEXT("Motorcycle_Base");
    this->BodyBoneKinematic = TEXT("Motorcycle_Body");
    this->DistanceInAirForInstinct = 4000.00f;
    this->AirTimeForInstinct = 7.00f;
    this->StandSafeMargin = 10.00f;
    this->BoostStartSound = NULL;
    this->BoostLoopSound = NULL;
    this->BoostEndSound = NULL;
    this->bIsStandDeployed = false;
    this->TimeStampIsBeingSummoned = 0.00f;
    this->SummoningPathResult = NULL;
    this->SummoningSpline = NULL;
    this->BurnoutAudio->SetupAttachment(RootComponent);
    this->BurnoutParticles->SetupAttachment(RootComponent);
    this->LeftStand->SetupAttachment(RootComponent);
    this->RightStand->SetupAttachment(RootComponent);
}

void AGGVehicle_Motorcycle::ServerThrowOffPlayers_Implementation(FVector LaunchVelocity) {
}

void AGGVehicle_Motorcycle::ServerJumpInputRelease_Implementation() {
}

void AGGVehicle_Motorcycle::ServerJumpInputDown_Implementation() {
}

void AGGVehicle_Motorcycle::OnWheelsChanged(UGGVehicleCustomizationDataAsset* NewCustomization, UGGVehicleCustomizationComponent* Component, bool bAsHighlight) {
}

void AGGVehicle_Motorcycle::OnSavedEquipmentLoaded(TArray<FSoftObjectPath> SoftPaths) {
}

void AGGVehicle_Motorcycle::OnRep_MotorcycleJump(const FGGMotorcycleJump& OldState) {
}

void AGGVehicle_Motorcycle::OnRep_MotorcycleHover(const FGGMotorcycleHover& OldState) {
}

void AGGVehicle_Motorcycle::OnRep_bIsStandDeployed() {
}

void AGGVehicle_Motorcycle::OnPaintChanged(UGGVehicleCustomizationDataAsset* NewCustomization, UGGVehicleCustomizationComponent* Component, bool bAsHighlight) {
}

void AGGVehicle_Motorcycle::OnBodyKitChanged(UGGVehicleCustomizationDataAsset* NewCustomization, UGGVehicleCustomizationComponent* Component, bool bAsHighlight) {
}

void AGGVehicle_Motorcycle::MulticastPlaySummoningAnimation_Implementation(float StartAt) {
}

void AGGVehicle_Motorcycle::MulticastMotorcycleReachedSurfaceWhileSummoned_Implementation(FTransform Transform) {
}

void AGGVehicle_Motorcycle::MulticastMotorcycleReachedSummoningLocation_Implementation() {
}

void AGGVehicle_Motorcycle::MotorcycleResetCustomizations() {
}

void AGGVehicle_Motorcycle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGVehicle_Motorcycle, MotorcycleMovement);
    DOREPLIFETIME(AGGVehicle_Motorcycle, MotorcycleHover);
    DOREPLIFETIME(AGGVehicle_Motorcycle, MotorcycleJump);
    DOREPLIFETIME(AGGVehicle_Motorcycle, bIsStandDeployed);
    DOREPLIFETIME(AGGVehicle_Motorcycle, TimeStampIsBeingSummoned);
}


