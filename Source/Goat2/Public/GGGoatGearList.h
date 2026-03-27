#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGFolderFilter.h"
#include "GGGoatGearList.generated.h"

class UGGGoatGearInfoDataAsset;

UCLASS(Blueprintable)
class GOAT2_API UGGGoatGearList : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FString> GearIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGFolderFilter> Folders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UGGGoatGearInfoDataAsset*> IncludedGoatGears;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UGGGoatGearInfoDataAsset*> ExcludedGoatGears;
    
public:
    UGGGoatGearList();

};

