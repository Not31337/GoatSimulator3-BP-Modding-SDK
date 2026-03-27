#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMoods.h"
#include "GGBaseAnimInstanceProxy_NPC.h"
#include "LSBaseAnimInstance.h"
#include "GGBaseAnimInstance_NPC.generated.h"

class AGGCharacter;
class AGGNPC_Humanoid;
class AGGVehicle;
class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGBaseAnimInstance_NPC : public ULSBaseAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> NormalWalkCycles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> NormalRunCycles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMoods, float> MoodMovementAnimationChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGBaseAnimInstanceProxy_NPC ProxyHumanoidNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGGNPC_Humanoid> HumanoidOwner;
    
public:
    UGGBaseAnimInstance_NPC();

protected:
    UFUNCTION(BlueprintCallable)
    void OnExitedVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimNotifyTriggered(const FGameplayTag& NotifyTag);
    
};

