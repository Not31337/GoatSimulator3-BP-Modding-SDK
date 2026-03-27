#include "GGStatusEffectTypes.h"

UGGStatusEffectTypes::UGGStatusEffectTypes() {
}

bool UGGStatusEffectTypes::HasStatusInterfaceOrIsSource(AActor* Actor) {
    return false;
}

bool UGGStatusEffectTypes::CanBeAffectedByStatusEffects(AActor* Actor, EStatusEffectTypes TypeToCheck) {
    return false;
}


