#pragma once
#include "CoreMinimal.h"
#include "ETutorialInputVisibility.h"
#include "TutorialActionInputStruct.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FTutorialActionInputStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialInputVisibility Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideText;
    
    FTutorialActionInputStruct();
};

