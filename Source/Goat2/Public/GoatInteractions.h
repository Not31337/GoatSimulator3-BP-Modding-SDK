#pragma once
#include "CoreMinimal.h"
#include "EInteractChances.h"
#include "EMoods.h"
#include "ENPCInteractions.h"
#include "GoatInteractions.generated.h"

USTRUCT(BlueprintType)
struct FGoatInteractions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCInteractions Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods Mood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractChances InteractChance;
    
    GOAT2_API FGoatInteractions();
};

