#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RadarWidgetClassData.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct GOAT2_API FRadarWidgetClassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TypeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> Class;
    
    FRadarWidgetClassData();
};

