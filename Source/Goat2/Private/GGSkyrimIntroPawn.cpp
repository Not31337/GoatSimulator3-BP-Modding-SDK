#include "GGSkyrimIntroPawn.h"
#include "Camera/CameraComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "FurComponent.h"

AGGSkyrimIntroPawn::AGGSkyrimIntroPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->BaaSound = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->GFurComponent = CreateDefaultSubobject<UGFurComponent>(TEXT("GFur"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->ControllingPlayer = NULL;
    this->CameraComponent->SetupAttachment(MeshComponent);
    this->GFurComponent->SetupAttachment(MeshComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
}


