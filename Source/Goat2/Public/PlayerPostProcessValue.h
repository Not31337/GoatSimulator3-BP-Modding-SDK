#pragma once
#include "CoreMinimal.h"
#include "PlayerPostProcessValue.generated.h"

class UPostProcessComponent;

USTRUCT(BlueprintType)
struct FPlayerPostProcessValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
    GOAT2_API FPlayerPostProcessValue();
};

