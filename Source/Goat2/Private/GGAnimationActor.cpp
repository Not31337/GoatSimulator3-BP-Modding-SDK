#include "GGAnimationActor.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

AGGAnimationActor::AGGAnimationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Comp"));
    this->SceneComp = (USceneComponent*)RootComponent;
    this->StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Comp"));
    this->SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh Comp"));
    this->SpawnedForAnimation = NULL;
    this->OwnerCharacter = NULL;
    this->SkeletalMeshComp->SetupAttachment(RootComponent);
    this->StaticMeshComp->SetupAttachment(RootComponent);
}


void AGGAnimationActor::OnGGAnimNotifyTrigger(AGGCharacter* Character, UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag) {
}


AGGCharacter* AGGAnimationActor::GetOwnerCharacter() const {
    return NULL;
}


