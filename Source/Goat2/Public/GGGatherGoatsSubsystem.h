#pragma once
#include "CoreMinimal.h"
#include "CountNotificationParameters.h"
#include "CurrentGatherEvent.h"
#include "GGWorldSubsystem.h"
#include "GatherGoatParameters.h"
#include "InviteNotificationParameters.h"
#include "OnAllGoatsGatheredDelegate.h"
#include "OnGatherEventGoatsUpdatedDelegate.h"
#include "GGGatherGoatsSubsystem.generated.h"

class AGGPlayerState;
class APlayerController;
class UGGTeleportSettingsDataAsset;

UCLASS(Blueprintable)
class GOAT2_API UGGGatherGoatsSubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGatherEventGoatsUpdated OnGatherEventGoatsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllGoatsGathered OnAllGoatsGathered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurrentGatherEvent> CurrentGatherEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTeleportSettingsDataAsset* DefaultTeleportSettings;
    
public:
    UGGGatherGoatsSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerLoggedOut(APlayerController* LeavingPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLoggedIn(APlayerController* NewPlayerController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGatherEventWithID(const FString& GatherID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GoatReachedLocation(const FString& GatherID, AGGPlayerState* Player);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GoatLeftLocation(const FString& GatherID, AGGPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGPlayerState*> GetPlayersAtTarget(const FString& GatherID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool GatherAllGoats(const FString& GatherID, AGGPlayerState* InvitingPlayer, FGatherGoatParameters GatherParameters, FInviteNotificationParameters InviteNotificationParameters, bool bShowGoatCountNotification, FCountNotificationParameters CountNotificationParameters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CancelGatherGoats(const FString& GatherID, bool bRemoveAllInvites);
    
};

