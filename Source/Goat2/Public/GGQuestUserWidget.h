#pragma once
#include "CoreMinimal.h"
#include "GGNotificationContainerWidget.h"
#include "OnWidgetClearQuestDelegate.h"
#include "OnWidgetShowQuestDelegate.h"
#include "GGQuestUserWidget.generated.h"

class AGGQuestBase;
class UGGQuestEntryUserWidget;
class UGGQuestManager;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGQuestUserWidget : public UGGNotificationContainerWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGQuestEntryUserWidget*> QuestWidgets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetShowQuest OnWidgetShowQuest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetClearQuest OnWidgetClearQuest;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGQuestManager* QuestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGQuestBase* CurrentQuest;
    
public:
    UGGQuestUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveQuest() const;
    
};

