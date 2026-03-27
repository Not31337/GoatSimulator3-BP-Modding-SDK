#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SpeechDialogueDirection.h"
#include "GGSpeechBubble.generated.h"

UINTERFACE(Blueprintable)
class GOAT2_API UGGSpeechBubble : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGSpeechBubble : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSpeechBubble();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowInteractionHint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpeechBubbleText(const FText& InText, SpeechDialogueDirection Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpeechBubbleCharacterName(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideSpeechBubble();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideInteractionHint();
    
};

