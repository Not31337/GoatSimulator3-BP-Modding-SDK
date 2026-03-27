#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGInstinctPackDataAsset.generated.h"

class AGGPlayerController;

UCLASS(Blueprintable)
class GOAT2_API UGGInstinctPackDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TokenReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGloballyAddedPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPostReleasePack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssociatedLevelDataID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideWhenLocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUnlocked;
    
public:
    UGGInstinctPackDataAsset();

    UFUNCTION(BlueprintCallable)
    bool UnlockInstinctPack(AGGPlayerController* Instigator, bool& bOutFirstPack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked();
    
};

