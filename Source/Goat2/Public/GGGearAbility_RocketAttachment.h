#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_RocketAttachment.generated.h"

class AActor;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_RocketAttachment : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RocketClass;
    
    UGGGearAbility_RocketAttachment();

};

