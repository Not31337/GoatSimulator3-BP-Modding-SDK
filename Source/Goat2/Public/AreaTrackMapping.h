#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AreaTrackMapping.generated.h"

class UMusicTrack;

USTRUCT(BlueprintType)
struct FAreaTrackMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AreaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrack* AreaTrack;
    
    GOAT2_API FAreaTrackMapping();
};

