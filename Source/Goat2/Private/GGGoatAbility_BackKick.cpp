#include "GGGoatAbility_BackKick.h"

UGGGoatAbility_BackKick::UGGGoatAbility_BackKick() {
    this->RepelText = FText::FromString(TEXT("<GREEN>Kicked</> {0}"));
    this->RepelledByTextFormat = FText::FromString(TEXT("<RED>Kicked by</> {0}"));
    this->ActorHitReactionWeights.AddDefaulted(4);
}


