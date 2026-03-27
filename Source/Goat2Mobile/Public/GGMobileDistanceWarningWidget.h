#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGMobileDistanceWarningWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2MOBILE_API UGGMobileDistanceWarningWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UGGMobileDistanceWarningWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnToggleDistanceWarning(bool bShow) const;
    
};

