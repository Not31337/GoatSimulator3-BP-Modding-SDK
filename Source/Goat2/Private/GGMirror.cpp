#include "GGMirror.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AGGMirror::AGGMirror(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->NumMipLevels = 5;
    this->ScreenSizeAtHighestMip = 0.45f;
    this->MirrorMaterial = NULL;
    this->TextureParameterName = TEXT("Texture");
    this->RenderTarget = NULL;
    this->SceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Scene Capture Component"));
    this->Mirror = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mirror"));
    this->MirrorMaterialInstance = NULL;
    this->Mirror->SetupAttachment(RootComponent);
    this->SceneCaptureComponent->SetupAttachment(RootComponent);
}


