#pragma once
#include "CoreMinimal.h"
#include "GGUserWidget.h"
#include "GGPartyListUserWidget.generated.h"

class UGGFriendListEntryUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPartyListUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGGFriendListEntryUserWidget*> ListEntries;
    
    UGGPartyListUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateLobbyDisplay();
    
};

