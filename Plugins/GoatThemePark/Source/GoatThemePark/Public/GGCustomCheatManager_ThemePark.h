#pragma once
#include "CoreMinimal.h"
#include "GGCustomCheatManager_Base.h"
#include "GGCustomCheatManager_ThemePark.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGCustomCheatManager_ThemePark : public UGGCustomCheatManager_Base {
    GENERATED_BODY()
public:
    UGGCustomCheatManager_ThemePark(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    static void ToggleFormerGearsLocked(bool bUnlocked);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RollercoasterRepairAllSections();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MakeNearbyNPCsNauseous(float Range);
    
};

