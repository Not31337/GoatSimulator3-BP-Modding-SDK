#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GGLeashComponentDelegateDelegate.h"
#include "GGLightningBoltsActivatedDelegateDelegate.h"
#include "GGLyreSpawnedDelegate.h"
#include "GGMedusaHairAbilityActivatedDelegate.h"
#include "GGPieProjectileHitCharacterDelegate.h"
#include "GGTeleportedToThorsHammerDelegate.h"
#include "GGMultiverseEventHandler.generated.h"

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGMultiverseEventHandler : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGMedusaHairAbilityActivated OnMedusaHairAbilityActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGLeashComponentDelegate OnActorLeashed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGLeashComponentDelegate OnActorUnLeashed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGLightningBoltsActivatedDelegate OnLightningBoltsAbilityActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGLyreSpawned OnLyreSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGPieProjectileHitCharacter OnPieProjectileHitCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGTeleportedToThorsHammer OnTeleportedToThorsHammer;
    
    UGGMultiverseEventHandler();

};

