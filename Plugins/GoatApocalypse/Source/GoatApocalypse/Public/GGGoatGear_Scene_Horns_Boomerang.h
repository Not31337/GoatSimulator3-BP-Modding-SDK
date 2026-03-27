#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Horns.h"
#include "GGGoatGear_Scene_Horns_Boomerang.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGGoatGear_Scene_Horns_Boomerang : public UGGGoatGear_Scene_Horns {
    GENERATED_BODY()
public:
    UGGGoatGear_Scene_Horns_Boomerang(const FObjectInitializer& ObjectInitializer);

};

