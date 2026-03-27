#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGNotificationWidgetInterface.h"
#include "GGUserWidget.h"
#include "GGGoatTowerSynchronizedWidget.generated.h"

class UScaleBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGGoatTowerSynchronizedWidget : public UGGUserWidget, public IGGNotificationWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SplashEntrySoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SplashExitSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileFontSizeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SyncronizationLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBoxContent;
    
    UGGGoatTowerSynchronizedWidget();


    // Fix for true pure virtual functions not being implemented
};

