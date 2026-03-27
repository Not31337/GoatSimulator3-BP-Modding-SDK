#include "GGDevelopmentTextRenderComponent.h"

UGGDevelopmentTextRenderComponent::UGGDevelopmentTextRenderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Text = FText::FromString(TEXT("DevelopmentText"));
}


