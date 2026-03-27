#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_GGBase.h"
#include "BTDecorator_GGShouldBrace.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGShouldBrace : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckForSprintingGoats;
    
    UBTDecorator_GGShouldBrace();

};

