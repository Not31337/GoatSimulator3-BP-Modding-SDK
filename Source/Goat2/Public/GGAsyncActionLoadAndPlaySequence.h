#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MovieSceneSequencePlayer.h"
#include "OnAsyncSequenceActionUpdateDelegate.h"
#include "GGAsyncActionLoadAndPlaySequence.generated.h"

class AGGLevelSequenceActor;
class UGGAsyncActionLoadAndPlaySequence;
class ULevelSequence;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGAsyncActionLoadAndPlaySequence : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncSequenceActionUpdate OnSequencePlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncSequenceActionUpdate OnSequencePause;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncSequenceActionUpdate OnSequenceStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncSequenceActionUpdate OnSequenceFinish;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGLevelSequenceActor* LevelSequenceActor;
    
public:
    UGGAsyncActionLoadAndPlaySequence();

private:
    UFUNCTION(BlueprintCallable)
    void SequenceStopped();
    
    UFUNCTION(BlueprintCallable)
    void SequencePlayed();
    
    UFUNCTION(BlueprintCallable)
    void SequencePaused();
    
    UFUNCTION(BlueprintCallable)
    void SequenceFinished();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGGAsyncActionLoadAndPlaySequence* CreateAsyncAction(UObject* NewWorldContextObject, TSoftObjectPtr<ULevelSequence> NewLevelSequence, FMovieSceneSequencePlaybackSettings NewPlaybackSettings);
    
};

