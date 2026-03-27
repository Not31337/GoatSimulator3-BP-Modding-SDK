#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "GGMobileContextualTouchWidget.generated.h"

class AGGIntro;
class UButton;
class UGGIntroComponent;
class UGGMobileControlsLayoutDefault;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2MOBILE_API UGGMobileContextualTouchWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ContextualButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D IntroSequenceContextualButtonSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntroSequenceContextualButtonVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGGMobileControlsLayoutDefault* LayoutDefaultWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGGIntroComponent* PCIntroComponent;
    
public:
    UGGMobileContextualTouchWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnIntroFinished(AGGIntro* Intro);
    
    UFUNCTION(BlueprintCallable)
    void ContextualButtonPressed();
    
};

