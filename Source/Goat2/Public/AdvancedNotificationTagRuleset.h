#pragma once
#include "CoreMinimal.h"
#include "AdvancedRule.h"
#include "AdvancedNotificationTagRuleset.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FAdvancedNotificationTagRuleset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAdvancedRule> Rules;
    
    FAdvancedNotificationTagRuleset();
};

