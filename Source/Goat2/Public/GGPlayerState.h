#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerState.h"
#include "Engine/NetSerialization.h"
#include "GGRadarInterface.h"
#include "OnGoatUpdatedDelegate.h"
#include "RadarCoordinateData.h"
#include "GGPlayerState.generated.h"

class AGGGoat;
class AGGGoatTower;
class AGGPlayerController;
class UGGTeleportAreaUser;

UCLASS(Blueprintable)
class GOAT2_API AGGPlayerState : public APlayerState, public IGGRadarInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatUpdated OnGoatUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize LastKnownServerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AGGGoatTower* CurrentGoatTower;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShouldHideNameplate, meta=(AllowPrivateAccess=true))
    bool bShouldHideNameplate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData PlayerRadarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData PlayerRadarDataMinigame;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerColor, meta=(AllowPrivateAccess=true))
    int32 PlayerColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerGoat, meta=(AllowPrivateAccess=true))
    AGGGoat* PlayerGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ServerIndex;
    
public:
    AGGPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPlayerScore(const float NewScore);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerGoat(AGGGoat* Goat);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNameplateHidden(bool bShouldBeHidden);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestPlayerColor(int32 ColorIndex, int32 BackupColorIndex);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayerColor(int32 ColorIndex, int32 BackupColorIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShouldHideNameplate();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerGoat();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGTeleportAreaUser* GetTeleportAreaUser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSteamIDWatermarkTextDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSteamIDWatermarkText();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetShouldHideNameplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetServerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoat* GetPlayerGoat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerColorIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPlayerColor() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastOnCreatedWhenReady();
    

    // Fix for true pure virtual functions not being implemented
};

