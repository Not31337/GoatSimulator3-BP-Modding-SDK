#pragma once
#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "GGTraceParams.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Portals.generated.h"

class AActor;
class AGGPortal;
class AGGPortalHorns_Projectile;
class AGGPortalHorns_TargetMarker;
class UGGGoatGear_Horns_Portals;

UCLASS(Abstract, Blueprintable)
class GEARPACK_FUTURE_API UGGGearAbility_Portals : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPortalHorns_Projectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPortal> PortalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGTraceParams AimParams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformFloat MaxDistanceToPortals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ForceFeedbackAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ForceFeedbackAbilityActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPortalHorns_TargetMarker* TargetMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Horns_Portals* PortalHorns;
    
    UGGGearAbility_Portals();

    UFUNCTION(BlueprintCallable)
    void OnProjectileReachedTarget(AActor* ProjectileActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPortalDestroyed(AActor* PortalActor);
    
};

