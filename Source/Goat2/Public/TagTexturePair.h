#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TagTexturePair.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct GOAT2_API FTagTexturePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    FTagTexturePair();
};

