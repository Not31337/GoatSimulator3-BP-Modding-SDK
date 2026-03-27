#include "GGShield.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AGGShield::AGGShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageTypeClass = NULL;
    this->bRandomBounce = true;
    this->MaxBounceAmount = 3;
    this->BounceYawAngleMarginal = 20;
    this->BouncePitchAngleMarginal = 5;
    this->MaxDistance = 2500.00f;
    this->DistanceToPlayerBeforeDestroyed = 20.00f;
    this->DistanceForPickupSound = 25.00f;
    this->DamageAmount = 100.00f;
    this->ImpulseForce = 1500.00f;
    this->RegularSpeed = 1000.00f;
    this->BackToPlayerSpeed = 1500.00f;
    this->VisualShield = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visual Shield"));
    this->MaxChainNumber = 3;
    this->bIsReturning = false;
    this->bHasReturned = false;
    this->VisualShield->SetupAttachment(RootComponent);
}


void AGGShield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGShield, bIsReturning);
    DOREPLIFETIME(AGGShield, bHasReturned);
}


