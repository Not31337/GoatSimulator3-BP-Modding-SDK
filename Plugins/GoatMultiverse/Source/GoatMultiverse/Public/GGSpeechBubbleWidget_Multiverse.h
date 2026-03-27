#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGSpeechBubbleWidget_Multiverse.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class GOATMULTIVERSE_API UGGSpeechBubbleWidget_Multiverse : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* CloseMoreButton;
    
    UGGSpeechBubbleWidget_Multiverse();

private:
    UFUNCTION(BlueprintCallable)
    void CloseMoreButtonPressed();
    
};

