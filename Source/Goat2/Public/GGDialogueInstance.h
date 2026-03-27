#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EGGDialogueInteractResponse.h"
#include "GGDialogueLine.h"
#include "GGDialogueLineIndex.h"
#include "GGDialogueLine_DelegateDelegate.h"
#include "GGDialogue_DelegateDelegate.h"
#include "GGDialogueInstance.generated.h"

class AActor;
class AGGPlayerController;
class UGGDialogueDataAsset;
class UGGDialogueInstance;

UCLASS(Blueprintable)
class GOAT2_API UGGDialogueInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDialogue_Delegate OnDialogueStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDialogueLine_Delegate OnDialogueLineStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDialogueLine_Delegate OnDialogueLineEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDialogueLine_Delegate OnDialogueRestarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDialogueLine_Delegate OnDialogueCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDialogue_Delegate OnDialogueEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGDialogueDataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDialogueLineIndex CurrentLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentLine, meta=(AllowPrivateAccess=true))
    FGGDialogueLineIndex CurrentLineRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGDialogueLineIndex PreviousLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* InteractingPlayer;
    
public:
    UGGDialogueInstance();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateHiddenState(const FGameplayTag& InFact, float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_K2(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    static UGGDialogueInstance* StartDialogueWith(AActor* WithActor, UGGDialogueDataAsset* Dialogue, AGGPlayerController* InPlayer);
    
    UFUNCTION(BlueprintCallable)
    bool StartDialogue(AGGPlayerController* InPlayer);
    
    UFUNCTION(BlueprintCallable)
    void RestartDialogue(AGGPlayerController* InPlayer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentLine();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidDialogue() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLastDialogueLine(FGGDialogueLineIndex LineIndex) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDialogueHidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDialogueFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDialogueActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentLinePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveDialogueLineLastOne() const;
    
    UFUNCTION(BlueprintCallable)
    EGGDialogueInteractResponse InteractWithDialogue(AGGPlayerController* InPlayer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGGDialogueLineIndex GetNextLineIndex(FGGDialogueLineIndex InCurrentLineIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGGDialogueLine GetNextLine(FGGDialogueLineIndex InCurrentLineIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGGDialogueLineIndex GetLineIndex(const FGGDialogueLine& InLine) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDialogueParticipantsName() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGGDialogueLine GetDialogueLine(FGGDialogueLineIndex LineIndex) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGDialogueDataAsset* GetDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGGDialogueLineIndex GetCurrentDialogueLineIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGGDialogueLine GetCurrentDialogueLine() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 FindActiveBranch() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void EndDialogue(AGGPlayerController* InPlayer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DialogueStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DialogueRestarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DialogueLineStarted_K2(const FGGDialogueLine& DialogueLine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DialogueEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DialogueCanceled();
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelDialogue(AGGPlayerController* InPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeInteractWith(AGGPlayerController* InPlayer) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAdvanceDialogueWithInteraction(AGGPlayerController* InPlayer, FGGDialogueLineIndex InCurrentLineIndex, float TimeStampLineStarted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAdvanceDialogue(FGGDialogueLineIndex InCurrentLineIndex, float TimeStampLineStarted) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool AdvanceDialogue(AGGPlayerController* InPlayer);
    
};

