#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RagdollStateChangeSettings.h"
#include "RagdollStateChangeSettingsLibrary.generated.h"

UCLASS(Blueprintable)
class URagdollStateChangeSettingsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URagdollStateChangeSettingsLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRagdollStateChangeSettings GetPreset_IgnoreTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRagdollStateChangeSettings GetPreset_IgnoreMaxVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRagdollStateChangeSettings GetPreset_ForceChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRagdollStateChangeSettings GetPreset_Default();
    
};

