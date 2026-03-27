#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnTriggerButtonDelegate.h"
#include "GGMobileHoldButton.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2MOBILE_API UGGMobileHoldButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* HoldButton;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTriggerButton OnTriggerButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHolding;
    
public:
    UGGMobileHoldButton();

private:
    UFUNCTION(BlueprintCallable)
    void HoldReleased();
    
    UFUNCTION(BlueprintCallable)
    void HoldPressed();
    
};

