#include "GGVoiceOverSubSystem.h"

UGGVoiceOverSubSystem::UGGVoiceOverSubSystem() {
    this->VoiceLineTableAssets.AddDefaulted(3);
    this->VoiceIdentityTableAssets.AddDefaulted(3);
    this->bDidCacheTable = false;
}

FVoiceLine UGGVoiceOverSubSystem::PickRandomWeightedCandidate(TArray<FDataTableRowHandle> Candidates) {
    return FVoiceLine{};
}

FVoiceLine UGGVoiceOverSubSystem::GetVoiceLineBlueprint(bool& bOutSuccess, FGameplayTag LineTag, FGameplayTag Identity, const TSet<FGameplayTag> MoodsToConsider, FAreasToConsider AreasToConsider, const bool bIgnoreWeights) {
    return FVoiceLine{};
}

FVoiceLine UGGVoiceOverSubSystem::GetVoiceLine(FGameplayTag LineTag, FGameplayTag Identity, const TSet<FGameplayTag> MoodsToConsider, FAreasToConsider AreasToConsider, const bool bIgnoreWeights) {
    return FVoiceLine{};
}

EGender UGGVoiceOverSubSystem::GetVoiceGender(FGameplayTag IdentityTag) {
    return EGender::G_None;
}

FVoiceLine UGGVoiceOverSubSystem::GetRandomVoiceLineWithSubtitle(FGameplayTag Identity, const FText& Subtitle) {
    return FVoiceLine{};
}

FGameplayTag UGGVoiceOverSubSystem::GetRandomVoiceIdentityTag() {
    return FGameplayTag{};
}

TSet<FGameplayTag> UGGVoiceOverSubSystem::GetAllVoiceIdentityTags() {
    return TSet<FGameplayTag>();
}

bool UGGVoiceOverSubSystem::DoesVoiceIdentityExist(FGameplayTag IdentityTag) {
    return false;
}

bool UGGVoiceOverSubSystem::CanVoiceBeRandomlySelected(FGameplayTag IdentityTag) {
    return false;
}

void UGGVoiceOverSubSystem::CacheVoiceLineTable() {
}


