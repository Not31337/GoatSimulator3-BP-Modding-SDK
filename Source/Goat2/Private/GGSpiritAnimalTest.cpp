#include "GGSpiritAnimalTest.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AGGSpiritAnimalTest::AGGSpiritAnimalTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->HeadbuttMontage = NULL;
    this->TargetScale = 5.00f;
    this->UpwardAdjust = 50.00f;
    this->ScaleUpSpeed = 2.00f;
    this->HeadbuttRadius = 400.00f;
    this->ImpulseStrength = 2000.00f;
    this->DespawnParticle = NULL;
    this->OwnerGoat = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}

void AGGSpiritAnimalTest::OnAnimationEnded(UAnimMontage* Montage, bool Interrupted) {
}


