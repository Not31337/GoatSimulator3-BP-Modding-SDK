#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InAreaState.h"
#include "OnEnteredTeleportAreaDelegate.h"
#include "OnLeftTeleportAreaDelegate.h"
#include "OnStartingToEnterAreaDelegate.h"
#include "OnStartingToLeaveAreaDelegate.h"
#include "GGTeleportAreaUser.generated.h"

class AGGGoat;
class AGGPlayerController;
class AGGPlayerState;
class UGGTeleportAreaDataAsset;
class UGGTeleportAreaUser;
class ULevelStreaming;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGTeleportAreaUser : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleportAsSoonAsReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnteredTeleportArea OnEnteredTeleportArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeftTeleportArea OnLeftTeleportArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartingToEnterArea OnStartingToEnterArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartingToLeaveArea OnStartingToLeaveArea;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InAreaState, meta=(AllowPrivateAccess=true))
    FInAreaState InAreaState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInsideAreaBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTeleportAreaDataAsset* CachedInArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTeleportAreaDataAsset* TravelingIntoArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTeleportAreaDataAsset* TravelingFromArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTeleportAreaDataAsset* LoadingLevelsForAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> LevelsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerState* OwningPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* OwningPlayer;
    
public:
    UGGTeleportAreaUser(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetReadyForLightingToggle(bool bReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTeleportPlayer(bool bTeleportInto);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetReadyForLightingToggle(bool bReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerExitTeleportArea();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStateGoatUpdated(AGGGoat* NewGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InAreaState();
    
    UFUNCTION(BlueprintCallable)
    void OnGoatReplaced(AGGGoat* OldGoat, AGGGoat* NewGoat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyForLightingToggle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInATPArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGoatInsideAreaBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAreaLoadedAndReadyToEnter();
    
    UFUNCTION(BlueprintCallable)
    bool InTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGTeleportAreaUser* GetTeleportAreaUserComponent(const AGGPlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAreaSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGTeleportAreaDataAsset* GetCurrentArea() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitTeleportArea();
    
};

