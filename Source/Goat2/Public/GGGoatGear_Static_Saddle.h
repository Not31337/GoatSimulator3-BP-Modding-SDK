#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Static_Base.h"
#include "GGGoatGear_Static_Saddle.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_Saddle : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UGGGoatGear_Static_Saddle(const FObjectInitializer& ObjectInitializer);

};

