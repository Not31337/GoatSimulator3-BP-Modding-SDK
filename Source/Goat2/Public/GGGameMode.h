#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EWorldSaveFileName.h"
#include "GGGameMode_Base.h"
#include "OnPlayerLoginDelegate.h"
#include "OnPlayerLogoutDelegate.h"
#include "OnSlowMotionToggledDelegate.h"
#include "GGGameMode.generated.h"

class AActor;
class AController;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API AGGGameMode : public AGGGameMode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerStartOccupiedDistanceCompare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerStartGoatDistanceCheck;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLogin OnPlayerLogin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLogout OnPlayerLogout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PlayersThatWantIntro;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSlowMotionTimeDilation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSlowMotionToggled OnSlowMotionToggled;
    
    AGGGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TimeDilateFor(float TimeDilation, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeDilation(float TimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void Say(AActor* Sender, const FString& Msg);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimeDilation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidWorldSaveFileName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWorldSaveFileName GetWorldSaveFileName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTimeDilation() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* CustomChoosePlayerStart(AController* Player);
    
};

