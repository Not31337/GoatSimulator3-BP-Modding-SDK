#pragma once
#include "CoreMinimal.h"
#include "GGMobileControlsLayoutDefault.h"
#include "GGMobileControlsLayoutDefault_MV.generated.h"

class UGGMobileControlsUserWidget_MV;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class GOATMULTIVERSE_API UGGMobileControlsLayoutDefault_MV : public UGGMobileControlsLayoutDefault {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InteractTextPromptOverlay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGGMobileControlsUserWidget_MV* BaseUserWidget_MV;
    
public:
    UGGMobileControlsLayoutDefault_MV();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInteractTextPrompt(const FText& CharacterName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSkippedCapybaraIntro();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedCapybaraIntro();
    
};

