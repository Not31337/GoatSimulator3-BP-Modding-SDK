#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGListEntryUserWidget.h"
#include "TagTexturePair.h"
#include "GGInstinctListEntryUserWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class GOAT2_API UGGInstinctListEntryUserWidget : public UGGListEntryUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTagTexturePair> InstinctCategoryIcons;
    
    UGGInstinctListEntryUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetInstinctIconFromTag(FGameplayTag InInstinctTag);
    
};

