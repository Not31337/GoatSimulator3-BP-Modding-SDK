#include "GGGearAbility_PerfectLanding.h"

UGGGearAbility_PerfectLanding::UGGGearAbility_PerfectLanding() {
    this->MaxBouncePower = 2000.00f;
    this->MinBouncePower = 600.00f;
    this->SpeedMultiplier = 1.20f;
}

void UGGGearAbility_PerfectLanding::UpdateBouncePower(const FGameplayAbilitySpecHandle Handle, AGGGoat* Goat) {
}


