#pragma once
#include "CoreMinimal.h"
#include "GGUserWidget.h"
#include "GGSettingsTabSectionHeaderUserWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGSettingsTabSectionHeaderUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SectionNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UGGSettingsTabSectionHeaderUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetSectionName(FText InText, FName InCategoryName);
    
};

