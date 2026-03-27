#include "GGHitRespondFlag.h"

FGGHitRespondFlag::FGGHitRespondFlag() {
    this->bShouldRespond = false;
    this->RespondsWhenCrouched = EGGImpactResult::Nothing;
    this->RespondsWhenProne = EGGImpactResult::Nothing;
}

