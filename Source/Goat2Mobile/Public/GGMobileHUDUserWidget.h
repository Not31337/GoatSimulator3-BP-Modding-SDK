#pragma once
#include "CoreMinimal.h"
#include "GGHUDUserWidget.h"
#include "GGMobileHUDUserWidget.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2MOBILE_API UGGMobileHUDUserWidget : public UGGHUDUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* CompassButton;
    
    UGGMobileHUDUserWidget();

    UFUNCTION(BlueprintCallable)
    void OpenMapMobile();
    
};

