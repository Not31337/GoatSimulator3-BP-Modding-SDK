#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Components/RichTextBlock.h"
#include "GGRichTextBlock.generated.h"

class UDataTable;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class GOAT2_API UGGRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHoldSoundCues;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverriddenDefaultStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HoldMID;
    
public:
    UGGRichTextBlock();

    UFUNCTION(BlueprintCallable)
    bool SetTargetUserIndex(int32 InUserIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOverriddenDefaultStyle(FName OverriddenStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetHeldDurationOverride(float HeldDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableHoldSoundCues(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadChanged(bool bGamepadActive);
    
    UFUNCTION(BlueprintCallable)
    void ListenForGamepadChanges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetTextStyleSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTextBlockStyle GetCurrentStyle() const;
    
};

