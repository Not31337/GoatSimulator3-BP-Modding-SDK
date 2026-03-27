#include "IFInteractiveFoliageActor.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AIFInteractiveFoliageActor::AIFInteractiveFoliageActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->UnrootedPhysicsAsset = NULL;
    this->CollisionProfileWhenrUnrooted = TEXT("PhysicsActor");
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->Capsule->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
}


