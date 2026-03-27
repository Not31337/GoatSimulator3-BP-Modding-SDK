#include "GGMultiNavModifier.h"
#include "Components/SceneComponent.h"

AGGMultiNavModifier::AGGMultiNavModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
    this->RootComp = (USceneComponent*)RootComponent;
    this->Billboard = NULL;
}


