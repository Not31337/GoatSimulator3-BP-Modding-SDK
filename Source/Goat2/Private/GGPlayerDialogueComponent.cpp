#include "GGPlayerDialogueComponent.h"

UGGPlayerDialogueComponent::UGGPlayerDialogueComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGGPlayerDialogueComponent::StartDialogueWith_Implementation(AActor* WithActor, UGGDialogueDataAsset* Dialogue) {
}

void UGGPlayerDialogueComponent::ServerStartDialogueLine_Implementation(UGGDialogueInstance* InDialogue, int32 NextLine) {
}

void UGGPlayerDialogueComponent::ServerStartDialogue_Implementation(UGGDialogueInstance* InDialogue) {
}

void UGGPlayerDialogueComponent::ServerRestartDialogue_Implementation(UGGDialogueInstance* InDialogue) {
}

void UGGPlayerDialogueComponent::ServerEndDialogue_Implementation(UGGDialogueInstance* InDialogue) {
}

void UGGPlayerDialogueComponent::ServerCancelDialogue_Implementation(UGGDialogueInstance* InDialogue) {
}

void UGGPlayerDialogueComponent::ServerAdvanceDialogue_Implementation(UGGDialogueInstance* InDialogue, AGGPlayerController* InteractingPlayer) {
}


