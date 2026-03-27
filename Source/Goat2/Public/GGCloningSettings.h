#pragma once
#include "CoreMinimal.h"
#include "GGCloningSettings.generated.h"

class AGGNPC;
class UGGAlternativeGoatDataAsset;

USTRUCT(BlueprintType)
struct GOAT2_API FGGCloningSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGNPC> DefaultNpcClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UGGAlternativeGoatDataAsset>, TSoftClassPtr<AGGNPC>> AltGoatToNpcClassMapping;
    
    FGGCloningSettings();
};

