#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PersonalGearPreset.h"
#include "SavedGearPreset.h"
#include "TutorialSaveData.h"
#include "PerLocalPlayerSaveData.generated.h"

class UPrimaryDataAsset;

USTRUCT(BlueprintType)
struct GOAT2_API FPerLocalPlayerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedGearPreset EquippedGoatGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialSaveData> SavedTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UPrimaryDataAsset>> MotorcycleEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPersonalGearPreset> PersonalGearPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPresetsAreModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FString> LastSortingOptions;
    
    FPerLocalPlayerSaveData();
};

