#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "CurrentTeleport.h"
#include "ELoadingScreenType.h"
#include "ERemovalReason.h"
#include "LoadingScreenParameters.h"
#include "OnTeleportStageUpdateDelegate.h"
#include "TeleportParameters.h"
#include "GGTeleportationComponent.generated.h"

class AGGGoat;
class AGGPlayerController;
class APlayerController;
class UGGLoadingScreenComponent;
class UGGTeleportSettingsDataAsset;
class UGGTeleportationComponent;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGTeleportationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EffectSourcesDuringTeleport;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentTeleport, meta=(AllowPrivateAccess=true))
    FCurrentTeleport CurrentTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerController*> VehiclePartners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* OwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* OwnerPlayerGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGLoadingScreenComponent* LoadingScreenComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> TeleportNotAllowedWarningWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* TeleportNotAllowedWarningWidgetInstance;
    
public:
    UGGTeleportationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void TeleportPlayer_WithCallbacks(APlayerController* PlayerController, FVector Location, FRotator Rotation, FTeleportParameters TeleportParameters, FLoadingScreenParameters LoadingScreenParameters, FOnTeleportStageUpdate OnTeleportStageUpdate, UGGTeleportSettingsDataAsset* SettingsAsset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void TeleportPlayer_LookAt_WithCallbacks(APlayerController* PlayerController, FVector Location, FVector LookAtLocation, FTeleportParameters TeleportParameters, FLoadingScreenParameters LoadingScreenParameters, FOnTeleportStageUpdate OnTeleportStageUpdate, UGGTeleportSettingsDataAsset* SettingsAsset);
    
    UFUNCTION(BlueprintCallable)
    static void TeleportPlayer_LookAt(APlayerController* PlayerController, FVector Location, FVector LookAtLocation, FTeleportParameters TeleportParameters, FLoadingScreenParameters LoadingScreenParameters, UGGTeleportSettingsDataAsset* SettingsAsset);
    
    UFUNCTION(BlueprintCallable)
    static void TeleportPlayer(APlayerController* PlayerController, FVector Location, FRotator Rotation, FTeleportParameters TeleportParameters, FLoadingScreenParameters LoadingScreenParameters, UGGTeleportSettingsDataAsset* SettingsAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ShowTeleportWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldTeleportWithVehicle(APlayerController* PlayerController);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTeleportPlayer(FVector_NetQuantize Location, FRotator Rotation, FTeleportParameters TeleportParameters, FLoadingScreenParameters LoadingScreenParameters, bool bUseLookAt, FVector LookAtLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMoveThePlayer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCancelPlayerTeleport();
    
    UFUNCTION(BlueprintCallable)
    void PlayerMoved();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentTeleport();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenRemoved(AGGPlayerController* Player, ELoadingScreenType LoadingScreenType, ERemovalReason RemovalReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeleporting(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAllowedToTeleport(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void HideTeleportWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGTeleportationComponent* GetTeleportComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void CancelPlayerTeleport(APlayerController* PlayerController);
    
};

