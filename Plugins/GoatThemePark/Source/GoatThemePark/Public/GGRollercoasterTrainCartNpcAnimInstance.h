#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SequenceEntryPinArray.h"
#include "GGRollercoasterTrainCartNpcAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class GOATTHEMEPARK_API UGGRollercoasterTrainCartNpcAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceEntryPinArray TrainStoppedAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceEntryPinArray TrainMovingAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFastened;
    
    UGGRollercoasterTrainCartNpcAnimInstance();

};

