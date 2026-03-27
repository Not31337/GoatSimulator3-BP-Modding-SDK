#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CanEquipGear.generated.h"

USTRUCT(BlueprintType)
struct FCanEquipGear {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AltGoatTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TagString;
    
    GOAT2_API FCanEquipGear();
};

