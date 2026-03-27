#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GearDLCInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FGearDLCInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconRowName;
    
    GOAT2_API FGearDLCInfo();
};

