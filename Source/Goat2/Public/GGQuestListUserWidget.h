#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "GGListUserWidget.h"
#include "OnQuestListItemClickedDelegate.h"
#include "OnQuestListItemSelectionDelegate.h"
#include "OnQuestListRebuiltDelegate.h"
#include "GGQuestListUserWidget.generated.h"

class AGGQuestBase;
class UListView;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGQuestListUserWidget : public UGGListUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ActiveSorting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* QuestList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestListRebuilt OnQuestListRebuilt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestListItemSelection OnQuestListItemSelection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestListItemClicked OnQuestListItemClicked;
    
    UGGQuestListUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldShowQuestInList(AGGQuestBase* Quest);
    
    UFUNCTION(BlueprintCallable)
    bool RebuildQuestListWithTagSet(TSet<FGameplayTag> TagSet);
    
    UFUNCTION(BlueprintCallable)
    void RebuildGridFromCollection(AGGQuestBase* QuestCollection);
    
    UFUNCTION(BlueprintCallable)
    void ClearQuestList();
    

    // Fix for true pure virtual functions not being implemented
};

