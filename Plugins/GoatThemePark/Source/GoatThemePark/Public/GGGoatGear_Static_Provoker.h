#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Static_Base.h"
#include "GGGoatGear_Static_Provoker.generated.h"

class AActor;
class AGGNPC_Humanoid;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGGoatGear_Static_Provoker : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UGGGoatGear_Static_Provoker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ProvokeNPCWithTarget(AGGNPC_Humanoid* NPC, AActor* Target, bool SetAsDamagedBy);
    
};

