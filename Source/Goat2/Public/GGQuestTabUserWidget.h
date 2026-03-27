#pragma once
#include "CoreMinimal.h"
#include "GGMenuTabUserWidget.h"
#include "QuestCategory.h"
#include "GGQuestTabUserWidget.generated.h"

class UGGQuestListUserWidget;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGQuestTabUserWidget : public UGGMenuTabUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestCategory> QuestCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultQuestProgressFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventHelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGQuestListUserWidget* QuestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AchievementImageIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AchievementTotalAmountLabel;
    
    UGGQuestTabUserWidget();

};

