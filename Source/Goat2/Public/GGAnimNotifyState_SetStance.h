#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ELSStance.h"
#include "GGAnimNotifyState_SetStance.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GOAT2_API UGGAnimNotifyState_SetStance : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELSStance Stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainBaseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchBackToPreviousStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELSStance StanceWhenDone;
    
    UGGAnimNotifyState_SetStance();

};

