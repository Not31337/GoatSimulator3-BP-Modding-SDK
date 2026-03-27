#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ESaveGameType.h"
#include "GGIntroComponent.generated.h"

class AActor;
class AGGIntro;
class AGGPlayerController;
class UMusicTrack;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GGPlayerController, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGIntroComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* OwningController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultIntroSaveGameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultIntroKeyInHasPlayedIntroCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveGameType IntroSaveGameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SkipIntroText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGIntro* DefaultIntroRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GoatEffectSourceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MenuEffectSourceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WidgetTagsToHideInIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrack* PreIntroMuteTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGIntro* CurrentIntro;
    
    UGGIntroComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SkipCurrentIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayIntro(AGGIntro* Intro);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleGoatInIntro(bool bInIntro);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayIntro(AGGIntro* Intro);
    
    UFUNCTION(BlueprintCallable)
    void PlayDefaultIntro();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelStartLoadingScreenRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingIntro();
    
    UFUNCTION(BlueprintCallable)
    void IntroFinished(AGGIntro* Intro);
    
    UFUNCTION(BlueprintCallable)
    void IntroDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayedIntro(AGGIntro* Intro);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<AGGIntro> GetDefaultIntro();
    
};

