#pragma once
#include "CoreMinimal.h"
#include "BubbleScaleUpState.generated.h"

USTRUCT(BlueprintType)
struct FBubbleScaleUpState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldScaleUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleStartServerTS;
    
    GOATTHEMEPARK_API FBubbleScaleUpState();
};

