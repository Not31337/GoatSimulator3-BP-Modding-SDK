#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GGEffectSpawnHolder.h"
#include "GGEffectHolderStaticLibrary.generated.h"

class UGGEffectsSpawnResult;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGEffectHolderStaticLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGEffectHolderStaticLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UGGEffectsSpawnResult* K2_SpawnEffectGroupAtWorldPosition(const UObject* WorldContext, FGGEffectSpawnHolder EffectsStruct, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    static UGGEffectsSpawnResult* K2_SpawnEffectGroupAttachedToComponent(USceneComponent* AttachToComponent, FGGEffectSpawnHolder EffectsStruct, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType);
    
};

