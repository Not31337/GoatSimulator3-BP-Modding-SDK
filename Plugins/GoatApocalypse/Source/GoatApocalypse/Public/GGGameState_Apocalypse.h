#pragma once
#include "CoreMinimal.h"
#include "GGGoatGameState.h"
#include "GravityGunLaunchedActor.h"
#include "UnlockedGoals.h"
#include "GGGameState_Apocalypse.generated.h"

class AActor;
class AGGCastleStretchGoal;
class AGGGoat;
class UGGCurrencyGameStateComponent;
class UTexture2D;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGGameState_Apocalypse : public AGGGoatGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UTexture2D>> CampUpgradeIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UTexture2D>> CampUpgradeIcons_Unframed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCurrencyGameStateComponent* CurrencyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadingScreenRemovalFrameDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FUnlockedGoals UnlockedGoals;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGravityGunLaunchedActor> RecentlyLaunchedActors;
    
public:
    AGGGameState_Apocalypse(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    AGGGoat* WasActorRecentlyGravityLaunched(AActor* Actor, bool& bWasRecent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGoalUnlocked(AGGCastleStretchGoal* UnlockedGoal);
    
};

