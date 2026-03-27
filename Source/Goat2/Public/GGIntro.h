#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnIntroFinishedDelegate.h"
#include "GGIntro.generated.h"

class UMovieSceneSequencePlayer;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API AGGIntro : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IntroID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSkipIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveGameKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayedThisSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipSavingDuringSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipInvalidationDuringSequence;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneSequencePlayer* IntroLevelSequence;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIntroFinished OnIntroFinished;
    
    AGGIntro(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SkipIntro();
    
    UFUNCTION(BlueprintCallable)
    void PlayIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkipIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishIntro();
    
    UFUNCTION(BlueprintCallable)
    void NativeDisableSkipForward();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsIntroPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsAnyIntroPlayingAndSkipSaving(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsAnyIntroPlayingAndSkipInvalidation(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsAnyIntroPlaying(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void FinishIntro();
    
};

