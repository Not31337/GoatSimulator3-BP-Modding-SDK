#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGNotificationWidgetInterface.h"
#include "GGUserWidget.h"
#include "Notification.h"
#include "GGWorldProgressUserWidget.generated.h"

class UGGRichTextBlock;
class UImage;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UScaleBox;
class UTextBlock;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GOAT2_API UGGWorldProgressUserWidget : public UGGUserWidget, public IGGNotificationWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SplashEntrySoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SplashExitSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressImageProgressParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleLabelRegular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRichTextBlock* DescriptionLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ProgressImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemIconShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBoxContent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProgressMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ItemIconCachedTexture;
    
public:
    UGGWorldProgressUserWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateProgressbar(float Percent);
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemIconMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemIcon(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockableState(FNotification Notification);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressState(int32 Increase, int32 Total);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateProgressbar(float Percent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTotalChaosChanged(int32 NewTotalChaos);
    

    // Fix for true pure virtual functions not being implemented
};

