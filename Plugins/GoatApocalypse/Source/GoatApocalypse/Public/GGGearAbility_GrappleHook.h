#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_GrappleHook.generated.h"

class AGGPhysicsProjectile_GrappleHook;
class UAnimMontage;
class UGGAlternativeGoatDataAsset;
class UGGGoatGear_Skel_GrappleHook;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGGearAbility_GrappleHook : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HookSocket;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalLaunchAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UGGAlternativeGoatDataAsset>, float> AltGoatAngleOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsProjectile_GrappleHook> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnHookCatchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireHookDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FireHookMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HookThrowRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HookReturnedRumble;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Skel_GrappleHook* GrappleGearMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPhysicsProjectile_GrappleHook* SpawnedHook;
    
public:
    UGGGearAbility_GrappleHook();

    UFUNCTION(BlueprintCallable)
    UGGGoatGear_Skel_GrappleHook* GetGrappleGearMesh();
    
};

