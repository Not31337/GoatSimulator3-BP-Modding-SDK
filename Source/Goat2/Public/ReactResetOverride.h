#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EReactResetCase.h"
#include "ReactResetOverride.generated.h"

USTRUCT(BlueprintType)
struct FReactResetOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EReactResetCase, bool> ResetCaseOverrides;
    
    GOAT2_API FReactResetOverride();
};

