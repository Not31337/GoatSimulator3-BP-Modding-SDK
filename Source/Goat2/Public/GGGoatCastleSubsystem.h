#pragma once
#include "CoreMinimal.h"
#include "EStateChangeSource.h"
#include "GGWorldSubsystem.h"
#include "OnCurrentGoalUpdatedDelegate.h"
#include "OnGoalUnlockedDelegate.h"
#include "GGGoatCastleSubsystem.generated.h"

class AGGBossPortal;
class AGGCastleStretchGoal;
class AGGThroneRoomScanner;
class UGGStretchGoalGroup;

UCLASS(Blueprintable)
class GOAT2_API UGGGoatCastleSubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGCastleStretchGoal*> CastleStretchGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGStretchGoalGroup* CurrentGroup;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentGoalUpdated OnCurrentGoalUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoalUnlocked OnGoalUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoalUnlocked OnClientGoalUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGThroneRoomScanner* ThroneRoomScanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGBossPortal* BossPortal;
    
    UGGGoatCastleSubsystem();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnlockStretchGoalWithIndex(int32 Index, EStateChangeSource Source, bool bAllowOutOfOrderUnlock);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnlockStretchGoal(AGGCastleStretchGoal* StretchGoal, EStateChangeSource Source, bool bAllowOutOfOrderUnlock);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTotalChaosChanged(int32 TotalChaos);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyGoalUnlocking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnlockedAllStretchGoals() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSetInitialState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockedStretchGoalsNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGoalProgressForChaos(const AGGCastleStretchGoal* StretchGoal, int32 ChaosAmount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGoalProgress(const AGGCastleStretchGoal* StretchGoal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGCastleStretchGoal* GetCurrentlyProgressingGoal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGCastleStretchGoal* GetCurrentlyActiveGoal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGCastleStretchGoal*> GetCastleStretchGoals() const;
    
};

