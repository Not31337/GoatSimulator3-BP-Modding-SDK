#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelSequenceActor.h"
#include "MovieSceneSequencePlayer.h"
#include "LevelSequenceSignificanceReaction.h"
#include "GGLevelSequenceActor.generated.h"

class AActor;
class AGGLevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> SignificanceLocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelSequenceSignificanceReaction> SignificanceReactions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTickTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UPrimitiveComponent*> ChildComponentsWithOverlaps;
    
public:
    AGGLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSignificance(float OldSignificance, float NewSignificance);
    
    UFUNCTION(BlueprintCallable)
    float GetSignificanceRange() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetSignificanceLocation();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelSequencePlayer* CreateGGLevelSequencePlayer(UObject* WorldContextObject, bool UseSignificance, ULevelSequence* InLevelSequence, FMovieSceneSequencePlaybackSettings Settings, AGGLevelSequenceActor*& OutActor);
    
};

