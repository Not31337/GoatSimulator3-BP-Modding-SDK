#include "GGAttackHand.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

AGGAttackHand::AGGAttackHand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root Sphere"));
    this->RootSphere = (USphereComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->IdleDistAboveTarget = 80.00f;
    this->IdleInterpSpeed = 1600.00f;
    this->InterpSpeed = 800.00f;
    this->FlickStrength = 1000.00f;
    this->FlickDistFromTarget = 150.00f;
    this->FlickDistAboveTarget = 45.00f;
    this->FlickAttackScale = 3.00f;
    this->FlickInterpSpeed = 1000.00f;
    this->FlickMontage = NULL;
    this->FlickParticle = NULL;
    this->FlickSound = NULL;
    this->OutwardsInterpSpeed = 100.00f;
    this->SlamUpwardDirection = 0.50f;
    this->SlamScaleIncrease = 1.00f;
    this->SlamDistAboveTarget = 100.00f;
    this->SlamInterpSpeed = 2000.00f;
    this->SlamStrength = 1000.00f;
    this->SlamAttackScale = 4.00f;
    this->SlamParticle = NULL;
    this->SlamSound = NULL;
    this->bAsFist = false;
    this->OwnerGoat = NULL;
    this->OwnerPC = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}

void AGGAttackHand::Flick() {
}


