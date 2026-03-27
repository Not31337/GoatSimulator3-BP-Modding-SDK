#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_BeeHive.generated.h"

class AActor;
class AGGBeeHive_Swarm;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGGearAbility_BeeHive : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGBeeHive_Swarm> SwarmClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalTraceAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BeeSwarmStartFollowingTargetRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGBeeHive_Swarm* ActiveSwarm;
    
public:
    UGGGearAbility_BeeHive();

    UFUNCTION(BlueprintCallable)
    void OnGoatEndPlay(AActor* Goat, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

