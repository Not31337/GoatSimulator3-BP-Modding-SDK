#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_AltGoat.h"
#include "GGGoatGear_Scene_AltGoat_Mascot.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGGoatGear_Scene_AltGoat_Mascot : public UGGGoatGear_Scene_AltGoat {
    GENERATED_BODY()
public:
    UGGGoatGear_Scene_AltGoat_Mascot(const FObjectInitializer& ObjectInitializer);

};

