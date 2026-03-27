#include "GGSpeechBubbleComponent.h"

UGGSpeechBubbleComponent::UGGSpeechBubbleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DialogueInstance = NULL;
}

void UGGSpeechBubbleComponent::DialogueStarted(UGGDialogueInstance* InDialogueInstance) {
}

void UGGSpeechBubbleComponent::DialogueLineStarted(const FGGDialogueLine& DialogueLine) {
}

void UGGSpeechBubbleComponent::DialogueEnded(UGGDialogueInstance* InDialogueInstance) {
}


