#pragma once
#include "CoreMinimal.h"
#include "GGQuestListUserWidget.h"
#include "GGQuestGridUserWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGQuestGridUserWidget : public UGGQuestListUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* QuestSetTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* QuestSetProgress;
    
    UGGQuestGridUserWidget();

};

