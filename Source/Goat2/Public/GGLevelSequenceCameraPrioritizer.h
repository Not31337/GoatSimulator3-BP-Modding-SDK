#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "PathPrioMapping.h"
#include "GGLevelSequenceCameraPrioritizer.generated.h"

class UMovieSceneSequencePlayer;
class USoundMix;

UCLASS(Blueprintable, Config=Game)
class GOAT2_API UGGLevelSequenceCameraPrioritizer : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathPrioMapping> PrioritizedPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* LevelSequenceSoundMixModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath IntroSequenceObjectPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath PostBossIntroSequenceObjectPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ApocalypseIntroSequenceObjectPath;
    
public:
    UGGLevelSequenceCameraPrioritizer();

    UFUNCTION(BlueprintCallable)
    void UpdateFocusedSplitscreenPlayerIndex();
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateCameraCutStateForPrioritizedSequences(UMovieSceneSequencePlayer* NewPlayer);
    
};

