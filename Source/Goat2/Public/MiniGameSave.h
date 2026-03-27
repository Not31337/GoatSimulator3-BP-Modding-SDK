#pragma once
#include "CoreMinimal.h"
#include "MiniGameSave.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FMiniGameSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Unlocked;
    
    FMiniGameSave();
};

