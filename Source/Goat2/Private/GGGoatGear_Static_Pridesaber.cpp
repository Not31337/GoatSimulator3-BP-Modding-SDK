#include "GGGoatGear_Static_Pridesaber.h"

UGGGoatGear_Static_Pridesaber::UGGGoatGear_Static_Pridesaber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SocketLeftSide = TEXT("BladesLeft");
    this->BladesLeftMesh = NULL;
    this->SocketRightSide = TEXT("BladesRight");
    this->BladesRightMesh = NULL;
    this->BladeHummingCue = NULL;
    this->bPridesaberIsActive = false;
    this->BladesLeft = NULL;
    this->BladesRight = NULL;
    this->BladeHummingSound = NULL;
}

void UGGGoatGear_Static_Pridesaber::SetPridesaberEnabledMulticast_Implementation(bool bEnablePridesaber) {
}


