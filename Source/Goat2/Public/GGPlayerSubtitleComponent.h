#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GGGameSetting.h"
#include "GGPlayerSubtitleComponent.generated.h"

class AGGPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGPlayerSubtitleComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SubtitleNotificationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ClosedCaptionNotificationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalSubtitleDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinClosedCaptionDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudibleSoundThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubtitlePriorityThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* OwningController;
    
public:
    UGGPlayerSubtitleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSubtitlePriority(float InPriority);
    
    UFUNCTION(BlueprintCallable)
    void ResetSubtitlePriority();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RemoveSubtitleNotification(const FString& NotificationID, bool bIsClosedCaption) const;
    
    UFUNCTION(BlueprintCallable)
    void OnSubtitlesSettingChanged(FGGGameSetting& InSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CreateSubtitleNotification(FText ActiveSubtitleText, const FString& NotificationID, float Duration, bool bIsClosedCaption) const;
    
};

