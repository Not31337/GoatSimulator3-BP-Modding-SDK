#include "GGPlayerWorldAreaDataAsset.h"

UGGPlayerWorldAreaDataAsset::UGGPlayerWorldAreaDataAsset() {
}

TSoftObjectPtr<UTexture2D> UGGPlayerWorldAreaDataAsset::GetThumbnailForArea(FGameplayTag Tag) {
    return NULL;
}

FGameplayTag UGGPlayerWorldAreaDataAsset::GetMostRelevantArea(TArray<FGameplayTag> Tags) {
    return FGameplayTag{};
}

FVector UGGPlayerWorldAreaDataAsset::GetAreaLocationFromAreaTag(FGameplayTag Tag, bool& bOutSuccess) {
    return FVector{};
}

FText UGGPlayerWorldAreaDataAsset::GetAreaDisplayNameFromAreaTag(FGameplayTag Tag) {
    return FText::GetEmpty();
}


