#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "GGDialogueLine.h"
#include "GGSpeechBubbleComponent.generated.h"

class UGGDialogueInstance;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGSpeechBubbleComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGDialogueInstance* DialogueInstance;
    
public:
    UGGSpeechBubbleComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void DialogueStarted(UGGDialogueInstance* InDialogueInstance);
    
    UFUNCTION(BlueprintCallable)
    void DialogueLineStarted(const FGGDialogueLine& DialogueLine);
    
    UFUNCTION(BlueprintCallable)
    void DialogueEnded(UGGDialogueInstance* InDialogueInstance);
    
};

