#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_GGBase.h"
#include "EReactResetCase.h"
#include "BTDecorator_GGCanReactReset.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGCanReactReset : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReactResetCase ReactResetCase;
    
    UBTDecorator_GGCanReactReset();

};

