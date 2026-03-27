#include "GGGoatGear_Body_MiningDwarfOutfit.h"
#include "Components/SpotLightComponent.h"

UGGGoatGear_Body_MiningDwarfOutfit::UGGGoatGear_Body_MiningDwarfOutfit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlashLight = NULL;
    this->LightClass = USpotLightComponent::StaticClass();
}


