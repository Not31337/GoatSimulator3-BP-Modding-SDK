#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGMenuUserWidget.h"
#include "GGMenuTabUserWidget.generated.h"

class UGGPauseMenuSubHeaderUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGMenuTabUserWidget : public UGGMenuUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGGMenuUserWidget> TopParentMenuClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionMappingsToListenFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HelpMenuText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPauseMenuSubHeaderUserWidget* TabSubHeader;
    
    UGGMenuTabUserWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowGameCenterAccessPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnPressedCustomGameCenterButton() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCategoryChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HideGameCenterAccessPoint() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetHelpMenuText();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCategory(FGameplayTag Category);
    
};

