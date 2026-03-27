#pragma once
#include "CoreMinimal.h"
#include "RecentlyGrabbedCharacter.generated.h"

class AGGCharacter;

USTRUCT(BlueprintType)
struct FRecentlyGrabbedCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    GOAT2_API FRecentlyGrabbedCharacter();
};

