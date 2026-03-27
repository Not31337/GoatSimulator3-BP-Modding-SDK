#include "LSTurnInPlaceNotify.h"

ULSTurnInPlaceNotify::ULSTurnInPlaceNotify() {
    this->bIsRightTurn = false;
    this->RotationAngleCurve = TEXT("RotationAngle");
    this->RotationRateScaleCurve = TEXT("RotationRateScale");
    this->RotationCurveAsset = NULL;
    this->bStopMontageWhenMoving = true;
}


