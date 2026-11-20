#include "GGPlayerController_ThemePark.h"

AGGPlayerController_ThemePark::AGGPlayerController_ThemePark(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CustomCheatManager_ThemePark = NULL;
}


