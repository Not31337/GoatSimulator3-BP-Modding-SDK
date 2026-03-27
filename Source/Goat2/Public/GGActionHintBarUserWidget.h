#pragma once
#include "CoreMinimal.h"
#include "ActionHintStruct.h"
#include "GGMenuComponentUserWidget.h"
#include "OnActionHintWidgetInteractedDelegate.h"
#include "GGActionHintBarUserWidget.generated.h"

class UGGActionHintBarEntry;
class UGGUserWidget;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGActionHintBarUserWidget : public UGGMenuComponentUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionHintStruct> ActionHints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionHintStruct> BaseHints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGActionHintBarEntry> EntryWidgetClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionHintWidgetInteracted OnActionHintWidgetInteracted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* LeftHints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* CenterHints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* RightHints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowBaseHints;
    
    UGGActionHintBarUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateHint(FActionHintStruct Hint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RebuildHints();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionHintEntryCreated(UGGActionHintBarEntry* EntryWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGGActionHintBarEntry*> GetEntries(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable)
    void ActionHintWidgetInteracted(UGGUserWidget* Widget, FActionHintStruct Hint);
    
};

