#pragma once
#include "CoreMinimal.h"
#include "ENewsFeedURLTypes.generated.h"

UENUM(BlueprintType)
enum class ENewsFeedURLTypes : uint8 {
    Base,
    PreviewData,
    PreviewImage,
    NewsWebURL,
};

