#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_GGBase.h"
#include "ERoamAfterDisturbed.h"
#include "BTDecorator_GGCanSwitchToRoaming.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGCanSwitchToRoaming : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERoamAfterDisturbed Reason;
    
    UBTDecorator_GGCanSwitchToRoaming();

};

