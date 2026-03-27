#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGGearAbility_Tutanpilgor.generated.h"

class AGGNPCEvent;
class AGGNPCEvent_Tutanpilgor;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_Tutanpilgor : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RumbleTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPCEvent_Tutanpilgor* CurrentNPCEvent;
    
public:
    UGGGearAbility_Tutanpilgor();

private:
    UFUNCTION(BlueprintCallable)
    void NPCEventCreateDelegate(AGGNPCEvent* NPCEvent);
    
};

