#include "GGPlayerController_Multiverse.h"
#include "GGIntroComponent_Multiverse.h"

AGGPlayerController_Multiverse::AGGPlayerController_Multiverse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGGIntroComponent_Multiverse>(TEXT("Intro Component"))) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CustomCheatManager_Multiverse = NULL;
}


