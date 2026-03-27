#include "GGGoatAbility_Headbutt.h"

UGGGoatAbility_Headbutt::UGGGoatAbility_Headbutt() {
    this->RepelText = FText::FromString(TEXT("<GREEN>Headbutt</> {0}"));
    this->RepelledByTextFormat = FText::FromString(TEXT("<RED>Headbutted by</> {0}"));
    this->ActorHitReactionWeights.AddDefaulted(4);
}


