#pragma once
#include "CoreMinimal.h"
#include "GGListEntryUserWidget.h"
#include "OnGearStyleEventDelegate.h"
#include "GGStyleButtonUserWidget.generated.h"

class UGGGoatGearStyleDataAsset;
class UImage;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGStyleButtonUserWidget : public UGGListEntryUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* StyleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* StyleSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearStyleDataAsset* StyleData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGearStyleEvent OnStyleSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGearStyleEvent OnStylePreviewed;
    
    UGGStyleButtonUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetImageBrushFromSoftTexture(UImage* Image, TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize, bool bHideWhileLoading);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleButtonReleased();
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelSoftTextureLoad();
    
};

