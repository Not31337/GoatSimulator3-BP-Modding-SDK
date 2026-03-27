#include "GGMiningDwarf_GlowStick.h"
#include "Components/PointLightComponent.h"

AGGMiningDwarf_GlowStick::AGGMiningDwarf_GlowStick(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light"));
    this->GlowMaterial = NULL;
    this->MobileGlowMaterial = NULL;
    this->PlayerColorMaterialParameter = TEXT("Player Color");
    this->GlowStrengthMaterialParameter = TEXT("Glow Strength Multiplier");
    this->LifetimeLightStrength = NULL;
    this->MaterialInstanceDynamic = NULL;
    this->PointLight->SetupAttachment(RootComponent);
}


