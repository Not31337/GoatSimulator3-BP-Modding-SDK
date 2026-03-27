#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGUserWidget.h"
#include "OnInstinctEntryIsFinishedDelegate.h"
#include "TagTexturePair.h"
#include "GGInstinctEntryUserWidget.generated.h"

class AGGInstinct;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class GOAT2_API UGGInstinctEntryUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGInstinct* AssociatedInstinct;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTagTexturePair> InstinctCategoryIcons;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInstinctEntryIsFinished OnInstinctEntryIsFinished;
    
    UGGInstinctEntryUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsWidgetStale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetInstinctIconFromTag(FGameplayTag InInstinctTag);
    
};

