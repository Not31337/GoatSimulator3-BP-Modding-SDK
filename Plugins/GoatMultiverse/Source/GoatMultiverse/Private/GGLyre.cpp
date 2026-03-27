#include "GGLyre.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GGDynamicAssetHoldingComponent.h"
#include "GGSkeletalMeshComponent.h"

AGGLyre::AGGLyre(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->LyreBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lyre Base"));
    this->LyreDString = CreateDefaultSubobject<UGGSkeletalMeshComponent>(TEXT("Lyre D String"));
    this->LyreFString = CreateDefaultSubobject<UGGSkeletalMeshComponent>(TEXT("Lyre F String"));
    this->LyreGString = CreateDefaultSubobject<UGGSkeletalMeshComponent>(TEXT("Lyre G String"));
    this->LyreGSharpString = CreateDefaultSubobject<UGGSkeletalMeshComponent>(TEXT("Lyre G Sharp String"));
    this->DynamicAssetHoldingComponent = CreateDefaultSubobject<UGGDynamicAssetHoldingComponent>(TEXT("Dynamic Asset Holding Component"));
    this->LyreSoundNames.AddDefaulted(4);
    this->bScaleUpOnSpawn = true;
    this->ScaleUpSpeed = 2.00f;
    this->ScaleDownSpeed = 15.00f;
    this->SpawnSoundName = TEXT("AppearSound");
    this->DestroySoundName = TEXT("DisappearSound");
    this->OnSpawnSoundVolumeMultiplier = 0.50f;
    this->LyreBase->SetupAttachment(RootComponent);
    this->LyreDString->SetupAttachment(LyreBase);
    this->LyreFString->SetupAttachment(LyreBase);
    this->LyreGSharpString->SetupAttachment(LyreBase);
    this->LyreGString->SetupAttachment(LyreBase);
}

void AGGLyre::ScaleDownAndDestroy_Implementation() {
}

void AGGLyre::PlaySpawnVFX(UGGDynamicAssetHoldingComponent* DynAssetComp) {
}

void AGGLyre::OnStringHeadbutted(UGGSkeletalMeshComponent* GGMeshComponent, AGGGoat* HeadbuttingGoat) {
}



