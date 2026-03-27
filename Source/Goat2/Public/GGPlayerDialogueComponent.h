#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGPlayerDialogueComponent.generated.h"

class AActor;
class AGGPlayerController;
class UGGDialogueDataAsset;
class UGGDialogueInstance;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GGPlayerController, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGPlayerDialogueComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGGPlayerDialogueComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartDialogueWith(AActor* WithActor, UGGDialogueDataAsset* Dialogue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartDialogueLine(UGGDialogueInstance* InDialogue, int32 NextLine);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartDialogue(UGGDialogueInstance* InDialogue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRestartDialogue(UGGDialogueInstance* InDialogue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEndDialogue(UGGDialogueInstance* InDialogue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCancelDialogue(UGGDialogueInstance* InDialogue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAdvanceDialogue(UGGDialogueInstance* InDialogue, AGGPlayerController* InteractingPlayer);
    
};

