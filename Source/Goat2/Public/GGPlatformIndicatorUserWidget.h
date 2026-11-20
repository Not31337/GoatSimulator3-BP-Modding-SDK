#pragma once
#include "CoreMinimal.h"
#include "EFriendPlatform.h"
#include "GGUserWidget.h"
#include "GGPlatformIndicatorUserWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPlatformIndicatorUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_CrossplayIcon;
    
    UGGPlatformIndicatorUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdatePlatformIndicator(EFriendPlatform InPlatform);
    
};

