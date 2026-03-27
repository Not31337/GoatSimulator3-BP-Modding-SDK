#include "GGVehicle_Boat.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "EVehicleType.h"
#include "GGBoatVehicleMovementComponent.h"

AGGVehicle_Boat::AGGVehicle_Boat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->VehicleType = EVehicleType::VT_Boat;
    this->ValidDriverTypes.AddDefaulted(1);
    this->bCanExplode = false;
    this->ValidDamageTypes.AddDefaulted(6);
    this->BoatVehicleMovement = CreateDefaultSubobject<UGGBoatVehicleMovementComponent>(TEXT("Boat Vehicle Movement"));
    this->SurfaceWaterIdleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Surface Water Idle Effect"));
    this->SurfaceWaterMovingEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Surface Water Moving Effect"));
    this->ThrusterWaterEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Thruster Water Effect"));
    this->WaterFloatingAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Water Floating Audio"));
    this->RequireTimeSinceSpawned = 2.00f;
    this->RequireTimeSinceDamageTaken = 2.00f;
    this->RequireMaxVelocity = 15.00f;
    this->FloatingACNewSpeed = 0.00f;
    this->AboveCOMTraceStart = 150.00f;
    this->BelowCOMTraceEnd = 100.00f;
    this->MovingSurfaceThreshold = 150.00f;
    this->WaterPhysVolume = NULL;
    this->WaterFloatingAudio->SetupAttachment(RootComponent);
}

UGGBoatVehicleMovementComponent* AGGVehicle_Boat::GetBoatVehicleMovementComponent() const {
    return NULL;
}

void AGGVehicle_Boat::DeactivateWaterEffects() {
}


