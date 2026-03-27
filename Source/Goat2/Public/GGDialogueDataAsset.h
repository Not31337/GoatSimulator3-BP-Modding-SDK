#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GGDialogueBranch.h"
#include "GGDialogueLine.h"
#include "GGDialogueLineIndex.h"
#include "GGHideDialogueSettings.h"
#include "Templates/SubclassOf.h"
#include "GGDialogueDataAsset.generated.h"

class UGGDialogueInstance;

UCLASS(Blueprintable)
class GOAT2_API UGGDialogueDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGDialogueInstance> InstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGDialogueLine> DialogueLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGDialogueBranch> OtherBranches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartDialogueAutomaticallyOnApproach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToStartTheDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeechBubbleCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomCharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGHideDialogueSettings HideDialogueSettings;
    
    UGGDialogueDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ResetDialogueTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidLineIndex(FGGDialogueLineIndex InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTagForDialogue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGGDialogueLine> GetDialogueLinesForBranch(int32 BranchIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGGDialogueLine GetDialogueLineForIndex(FGGDialogueLineIndex InIndex) const;
    
};

