#pragma once
#include "CoreMinimal.h"
#include "GGNotificationUserWidget.h"
#include "Templates/SubclassOf.h"
#include "GGInstinctsUserWidget.generated.h"

class AGGQuestBase;
class UGGInstinctEntryUserWidget;
class UUserWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGInstinctsUserWidget : public UGGNotificationUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAmountOfInstincts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InstinctWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* InstinctWidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGInstinctEntryUserWidget*> ActiveInstinctWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGQuestBase*> CurrentInstincts;
    
public:
    UGGInstinctsUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnInstinctWidgetFinished(UGGInstinctEntryUserWidget* Entry);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInstinctsActive(bool bHasActiveInstincts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGInstinctEntryUserWidget* GetWidgetForInstinct(AGGQuestBase* Quest);
    
};

