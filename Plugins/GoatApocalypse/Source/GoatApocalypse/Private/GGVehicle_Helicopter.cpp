#include "GGVehicle_Helicopter.h"
#include "Components/StaticMeshComponent.h"
#include "EGGVehicleCameraFollow.h"
#include "EVehicleType.h"
#include "Net/UnrealNetwork.h"

AGGVehicle_Helicopter::AGGVehicle_Helicopter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->VehicleType = EVehicleType::VT_Helicopter;
    this->ValidDriverTypes.AddDefaulted(3);
    this->ValidDamageTypes.AddDefaulted(6);
    this->CameraFollowVehicle = EGGVehicleCameraFollow::NeverFollow;
    this->RotorBladeSpinningCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rotor Blade Spinning Collision"));
    this->MainRotorThrust = 0.00f;
    this->RotorBladeSpinningCollision->SetupAttachment(RootComponent);
}

void AGGVehicle_Helicopter::ServerMove_Implementation(FVector_NetQuantize Location, FRotator Rotation, FVector_NetQuantize LinearVelocity, FVector_NetQuantize AngularVelocity, float InMainRotorThrust) {
}

void AGGVehicle_Helicopter::OnRotorBladesHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGGVehicle_Helicopter::OnRotorBladeOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AGGVehicle_Helicopter::IsRotorIdling() const {
    return false;
}

float AGGVehicle_Helicopter::GetMainRotorPercentage() const {
    return 0.0f;
}

float AGGVehicle_Helicopter::GetMainRotorDeltaAngle(float DeltaSeconds) const {
    return 0.0f;
}

void AGGVehicle_Helicopter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGVehicle_Helicopter, MainRotorThrust);
}


