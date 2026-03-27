#pragma once
#include "CoreMinimal.h"
#include "GGMobileContextualTouchWidget.h"
#include "GGMobileContextualTouchWidget_MV.generated.h"

class UGGMobileControlsUserWidget_MV;

UCLASS(Blueprintable, EditInlineNew)
class GOATMULTIVERSE_API UGGMobileContextualTouchWidget_MV : public UGGMobileContextualTouchWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGGMobileControlsUserWidget_MV* BaseUserWidget_MV;
    
public:
    UGGMobileContextualTouchWidget_MV();

private:
    UFUNCTION(BlueprintCallable)
    void OnStartCapybaraIntro();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedCapybaraIntro();
    
};

