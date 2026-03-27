#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NotificationWidgetClassData.h"
#include "GGNotificationWidgetClassDataAsset.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGNotificationWidgetClassDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNotificationWidgetClassData> WidgetClasses;
    
    UGGNotificationWidgetClassDataAsset();

};

