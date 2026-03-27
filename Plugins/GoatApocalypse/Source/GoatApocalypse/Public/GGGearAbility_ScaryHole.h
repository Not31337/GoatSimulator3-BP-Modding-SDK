#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_ScaryHole.generated.h"

class AGGScaryHoleActor;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_ScaryHole : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGScaryHoleActor> ScaryHoleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RumbleTag;
    
    UGGGearAbility_ScaryHole();

};

