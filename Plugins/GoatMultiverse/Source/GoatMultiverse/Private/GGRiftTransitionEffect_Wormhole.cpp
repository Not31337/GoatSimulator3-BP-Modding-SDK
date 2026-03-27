#include "GGRiftTransitionEffect_Wormhole.h"

AGGRiftTransitionEffect_Wormhole::AGGRiftTransitionEffect_Wormhole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeDuration = 1.00f;
    this->bDisableSplitscreen = true;
}






void AGGRiftTransitionEffect_Wormhole::OnLeftTeleportArea(AGGPlayerState* Player, UGGTeleportAreaDataAsset* AreaAsset) {
}

void AGGRiftTransitionEffect_Wormhole::OnEnteredTeleportArea(AGGPlayerState* Player, UGGTeleportAreaDataAsset* AreaAsset) {
}

bool AGGRiftTransitionEffect_Wormhole::IsSplitscreenPlayer() const {
    return false;
}



