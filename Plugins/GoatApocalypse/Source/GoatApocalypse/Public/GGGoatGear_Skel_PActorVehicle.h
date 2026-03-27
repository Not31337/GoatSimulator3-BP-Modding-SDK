#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Skel_Base.h"
#include "GGGoatGear_Skel_PActorVehicle.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGGoatGear_Skel_PActorVehicle : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
    UGGGoatGear_Skel_PActorVehicle(const FObjectInitializer& ObjectInitializer);

};

