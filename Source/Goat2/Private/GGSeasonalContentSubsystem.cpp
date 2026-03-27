#include "GGSeasonalContentSubsystem.h"

UGGSeasonalContentSubsystem::UGGSeasonalContentSubsystem() {
}

void UGGSeasonalContentSubsystem::SetSeasonalGameplayTagEnabled(const FGameplayTag& SeasonalTag, bool bEnabled) {
}

void UGGSeasonalContentSubsystem::SetSeasonalContentEnabled(const FString& SeasonalTagName, bool bEnabled) {
}

void UGGSeasonalContentSubsystem::SetSeasonalActorTagEnabled(const FString& SeasonalTag, bool bEnabled) {
}

bool UGGSeasonalContentSubsystem::IsSeasonalContentEnabled(const FGameplayTagContainer& GameplayTags) const {
    return false;
}

bool UGGSeasonalContentSubsystem::IsSeasonalActorExcluded(const AActor* Actor) const {
    return false;
}


