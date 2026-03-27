#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGUIAudioSoundSourcesDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GOAT2_API UGGUIAudioSoundSourcesDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> UISoundDataTables;
    
    UGGUIAudioSoundSourcesDataAsset();

};

