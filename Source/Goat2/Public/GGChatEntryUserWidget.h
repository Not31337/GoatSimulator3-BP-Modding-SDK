#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "Notification.h"
#include "GGChatEntryUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGChatEntryUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EntryTag;
    
    UGGChatEntryUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateLabels(FNotification Notification);
    
};

