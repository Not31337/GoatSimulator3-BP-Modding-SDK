#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GGDisguiseAsNPCParams.generated.h"

class UGGDisguiseComponent;

USTRUCT(BlueprintType)
struct GOAT2_API FGGDisguiseAsNPCParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevertDisguiseOnAbilityPress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGDisguiseComponent> DisguiseComponentClass;
    
    FGGDisguiseAsNPCParams();
};

