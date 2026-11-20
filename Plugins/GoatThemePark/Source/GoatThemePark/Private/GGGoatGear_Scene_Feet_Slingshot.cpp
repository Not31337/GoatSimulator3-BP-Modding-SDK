#include "GGGoatGear_Scene_Feet_Slingshot.h"

UGGGoatGear_Scene_Feet_Slingshot::UGGGoatGear_Scene_Feet_Slingshot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGGGoatGear_Scene_Feet_Slingshot::SetCurrentSlingshot(AGGSlingshot* InUseSlingshot) {
}

bool UGGGoatGear_Scene_Feet_Slingshot::IsSomeSlingshotInUse() const {
    return false;
}

AGGSlingshot* UGGGoatGear_Scene_Feet_Slingshot::GetCurrentSlingshot() {
    return NULL;
}


