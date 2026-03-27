#include "GGTutorialGearAbility.h"

AGGTutorialGearAbility::AGGTutorialGearAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TutorialID = TEXT("GearAbility");
    this->TimeUntilAutomaticCompletion = 15.00f;
}

void AGGTutorialGearAbility::OnGoatAbilityActivated(AGGGoat* Goat, FGameplayTagContainer AbilityTags, UGGGearAbility* AbilityInstance) {
}

void AGGTutorialGearAbility::OnAbilityDown() {
}

void AGGTutorialGearAbility::CompleteAutomatically() {
}


