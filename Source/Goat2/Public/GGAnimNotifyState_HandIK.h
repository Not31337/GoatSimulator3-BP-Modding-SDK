#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EHandIKTarget.h"
#include "GGAnimNotifyState_HandIK.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GOAT2_API UGGAnimNotifyState_HandIK : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHandIKTarget HandIKTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveEnableHandIKLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveEnableHandIKRight;
    
    UGGAnimNotifyState_HandIK();

};

