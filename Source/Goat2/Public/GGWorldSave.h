#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGSaveGameBase.h"
#include "GGWorldSave.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGWorldSave : public UGGSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ChaosTokensCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ChaosCollectedSourceIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GameStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastEnteredGoatTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SyncedGoatTowers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockedCastleStretchgoals;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid WorldIdentifier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, uint8> WorldPersistenceStates;
    
    UGGWorldSave();

    UFUNCTION(BlueprintCallable)
    FGuid GetWorldIdentifier();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetCollectedSourceIDs();
    
    UFUNCTION()
    bool AddChaosToTotal(uint32 ChaosToAdd, const FString& AcquisitionID, bool bAllowRecurring);
    
};

