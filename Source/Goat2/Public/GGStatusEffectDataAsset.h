#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EStatusEffectTypes.h"
#include "Templates/SubclassOf.h"
#include "GGStatusEffectDataAsset.generated.h"

class AGGStatusEffectBase;

UCLASS(Blueprintable)
class GOAT2_API UGGStatusEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectTypes StatusEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGStatusEffectBase> DefaultClass;
    
    UGGStatusEffectDataAsset();

};

