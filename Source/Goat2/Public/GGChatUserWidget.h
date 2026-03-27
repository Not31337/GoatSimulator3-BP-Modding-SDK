#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGNotificationUserWidget.h"
#include "Notification.h"
#include "GGChatUserWidget.generated.h"

class UDataTable;
class UGGChatEntryTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGChatUserWidget : public UGGNotificationUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumNumberOfChatEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatFadeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrapChatEntires;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ChatEntryContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SilentChatTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultChatTextStyle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGChatEntryTextBlock*> ChatEntryList;
    
public:
    UGGChatUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowChat(FNotification Notification);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatedChatEntry(FNotification Notification);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChatEnterCommand();
    
};

