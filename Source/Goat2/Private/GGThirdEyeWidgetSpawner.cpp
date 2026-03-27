#include "GGThirdEyeWidgetSpawner.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

AGGThirdEyeWidgetSpawner::AGGThirdEyeWidgetSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->Root = (USceneComponent*)RootComponent;
    this->SceneCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("2D Capture Component"));
    this->ThirdEyeWidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget Component"));
    this->ThirdEyeWidgetClass = NULL;
    this->DefaultTextureMaterial = NULL;
    this->TextureMaterial = NULL;
    this->CurrentPactor = NULL;
    this->TextureTarget = NULL;
    this->OwningGoat = NULL;
    this->SceneCaptureComponent->SetupAttachment(RootComponent);
    this->ThirdEyeWidgetComp->SetupAttachment(RootComponent);
}


FString AGGThirdEyeWidgetSpawner::GetTargetName(AActor* Target) {
    return TEXT("");
}

FString AGGThirdEyeWidgetSpawner::GetRandomInformation() {
    return TEXT("");
}


