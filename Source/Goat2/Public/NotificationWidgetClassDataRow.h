#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "NotificationWidgetClassData.h"
#include "NotificationWidgetTagRuleset.h"
#include "NotificationWidgetClassDataRow.generated.h"

class UGGNotificationContainerWidget;

USTRUCT(BlueprintType)
struct FNotificationWidgetClassDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ContainerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNotificationWidgetClassData> WidgetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGNotificationContainerWidget> ContainerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationWidgetTagRuleset WidgetContainerRuleset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationWidgetTagRuleset SplitScreenWidgetContainerRuleset;
    
    GOAT2_API FNotificationWidgetClassDataRow();
};

