#pragma once
#include "CoreMinimal.h"
#include "GGCastleStretchGoal.h"
#include "LoadingScreenParameters.h"
#include "TeleportParameters.h"
#include "LinkedNPCSpawner.h"
#include "GGCastleStretchGoal_Apocalypse.generated.h"

class AGGPlayerGroupTeleportTarget;
class UDataTable;
class UWorld;

UCLASS(Abstract, Blueprintable)
class GOATAPOCALYPSE_API AGGCastleStretchGoal_Apocalypse : public AGGCastleStretchGoal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CampUpgradeSaveKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrencySpendSourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> LockedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> UnlockedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinalVaultUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpendingSourcesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGGPlayerGroupTeleportTarget> TeleportTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeleportParameters TeleportParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenParameters LoadingScreenParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinkedNPCSpawner> LinkedNPCSpawners;
    
    AGGCastleStretchGoal_Apocalypse(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerVaultLight();
    
    UFUNCTION(BlueprintCallable)
    void TeleportPlayersToUpgradeLoc();
    
    UFUNCTION(BlueprintCallable)
    void SetUpgradeLevelStates(bool bIsUnlocked);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinkedSpawnersEnabled(bool bEnabled, TArray<FLinkedNPCSpawner> Spawners);
    
};

