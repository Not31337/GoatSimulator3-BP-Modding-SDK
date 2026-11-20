#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EControllerState.h"
#include "OnGameNightDeviceRemovedDelegate.h"
#include "OnGameNightGameSessionCreatedDelegate.h"
#include "OnGameNightMessagingServerConnectedDelegate.h"
#include "OnGameNightPlayerConnectDelegate.h"
#include "OnGameNightPlayerDisconnectDelegate.h"
#include "OnGameNightSessionStartDelegate.h"
#include "OnGameNightVIPStatusChangedDelegate.h"
#include "GoatGameNightSubsystem.generated.h"

class UGameNightSessionManager;
class UGoatGameNightWebController;
class UTexture2D;

UCLASS(Blueprintable)
class GOATGAMENIGHT_API UGoatGameNightSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameNightGameSessionCreated OnSessionCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameNightMessagingServerConnected OnServerConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameNightPlayerConnect OnPlayerConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameNightPlayerDisconnect OnPlayerDisconnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameNightDeviceRemoved OnDeviceRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameNightSessionStart OnSessionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameNightVIPStatusChanged OnVIPStatusChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameNightSessionManager* SessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* QRCodeCache;
    
public:
    UGoatGameNightSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartWebToPhysicalMode();
    
    UFUNCTION(BlueprintCallable)
    void StartPhysicalToWebMode();
    
    UFUNCTION(BlueprintCallable)
    void StartGameNightFlow();
    
    UFUNCTION(BlueprintCallable)
    void SetWebControllerMode();
    
    UFUNCTION(BlueprintCallable)
    void SetQRCodeCache(UTexture2D* NewCache);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicalControllerMode();
    
    UFUNCTION(BlueprintCallable)
    void SetNextStateToAllWebControllers(EControllerState State);
    
    UFUNCTION(BlueprintCallable)
    void SetNextStateForVIPController(EControllerState State);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerScreen(int32 PlayerSlot, const FString& Route);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingPhysicalController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasControllerChoiceBeenMade() const;
    
    UFUNCTION(BlueprintCallable)
    UGoatGameNightWebController* GetWebController(int32 PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameNightSessionManager* GetSessionManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHoldDuration() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UGoatGameNightWebController*> GetControllerArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetCachedQRCode() const;
    
    UFUNCTION(BlueprintCallable)
    void EndWebToPhysicalMode(bool bUsingPhysical);
    
    UFUNCTION(BlueprintCallable)
    void EndPhysicalToWebMode(bool bUsingWebController);
    
    UFUNCTION(BlueprintCallable)
    void AdvertiseEnteredMainMenuForAllPlayers();
    
};

