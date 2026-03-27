#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NotificationWidgetClassData.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct GOAT2_API FNotificationWidgetClassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> Class;
    
    FNotificationWidgetClassData();
};

