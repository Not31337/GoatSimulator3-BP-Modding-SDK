#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EHeadTurning.h"
#include "AnimNotifyState_GGBlockTurning.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class GOAT2_API UAnimNotifyState_GGBlockTurning : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeadTurning BlockState;
    
    UAnimNotifyState_GGBlockTurning();

};

