#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Skel_Base.h"
#include "GGGoatGear_Static_GhostMovieProp.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_GhostMovieProp : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
    UGGGoatGear_Static_GhostMovieProp(const FObjectInitializer& ObjectInitializer);

};

