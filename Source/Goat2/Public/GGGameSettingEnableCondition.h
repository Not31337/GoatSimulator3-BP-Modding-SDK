#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGEvaluateActiveStatus_DelegateDelegate.h"
#include "GGGameSettingEnableCondition.generated.h"

class UGGGameSettingOptionUserWidget;

UCLASS(Abstract, Blueprintable)
class GOAT2_API UGGGameSettingEnableCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGEvaluateActiveStatus_Delegate EvaluateActiveStatus;
    
    UGGGameSettingEnableCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldSettingBeActive(UGGGameSettingOptionUserWidget* InUserWidget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWidgetDestroyed(UGGGameSettingOptionUserWidget* InUserWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWidgetConstructed(UGGGameSettingOptionUserWidget* InUserWidget);
    
};

