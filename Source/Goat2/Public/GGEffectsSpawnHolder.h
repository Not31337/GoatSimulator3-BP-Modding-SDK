#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGEffectSpawnHolder.h"
#include "GGEffectsSpawnHolder.generated.h"

class UGGEffectsSpawnResult;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class GOAT2_API UGGEffectsSpawnHolder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGEffectSpawnHolder EffectsStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGEffectsSpawnResult* StoredSpawnResults;
    
    UGGEffectsSpawnHolder();

};

