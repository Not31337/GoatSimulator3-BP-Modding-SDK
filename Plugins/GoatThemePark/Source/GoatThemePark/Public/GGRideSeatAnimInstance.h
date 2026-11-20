#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SequenceEntryPinArray.h"
#include "GGRideSeatAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOATTHEMEPARK_API UGGRideSeatAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceEntryPinArray UpperBodyAnimationsWithoutFastener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceEntryPinArray UpperBodyAnimationsWithFastener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceEntryPinArray LowerBodyAnimationsToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFastened;
    
    UGGRideSeatAnimInstance();

};

