#pragma once
#include "CoreMinimal.h"
#include "GGWorldSubsystem.h"
#include "CactusStreakCactusDestroyedDelegate.h"
#include "CactusStreakEndedDelegate.h"
#include "CactusStreakStartedDelegate.h"
#include "PlayerCactusScore.h"
#include "GGCactusScoreSubsystem.generated.h"

class AGGPlayerState_Apocalypse;
class UCurveFloat;

UCLASS(Blueprintable, Config=Game)
class GOATAPOCALYPSE_API UGGCactusScoreSubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> CurrencyScoreCurve;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAbovePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentHighScore;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CactiRequiredForInstinct;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCactusStreakStarted CactusStreakStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCactusStreakEnded CactusStreakEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCactusStreakCactusDestroyed CactusStreakCactusDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerCactusScore> PlayerScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScoreCurve;
    
public:
    UGGCactusScoreSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCactusStreakActive(AGGPlayerState_Apocalypse* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerCactusScore GetPlayerScore(AGGPlayerState_Apocalypse* Player) const;
    
};

