#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EStateChangeSource.h"
#include "EStretchGoalStates.h"
#include "OnGoalChangedStateDelegate.h"
#include "GGCastleStretchGoal.generated.h"

class UGGStretchGoalGroup;
class ULevelSequence;
class UMaterialInterface;

UCLASS(Blueprintable)
class GOAT2_API AGGCastleStretchGoal : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StretchGoalIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGStretchGoalGroup* StretchGoalGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StretchGoalDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StretchGoalInProgressText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DisplayIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeededChaosAmount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStretchGoalStates CurrentState;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoalChangedState OnGoalChangedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* GoalSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StretchGoalFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StretchGoalFadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnlockTimerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeenSequence;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditGoalIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditChaosCost;
    
public:
    AGGCastleStretchGoal(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SequenceFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSequenceStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSequenceFinished();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetToFinishedState();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlaySequence();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastFadeOut();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoalInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoalChangedState(EStretchGoalStates NewState, EStateChangeSource ChangeSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FadeIn() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CurrentStateReplicated(EStretchGoalStates NewState);
    
};

