#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PerPlatformProperties.h"
#include "Engine/EngineTypes.h"
#include "EAttachmentHandSlot.h"
#include "GGGearAbility.h"
#include "GGBalloonVariation.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_SpawnBalloon.generated.h"

class AActor;
class AGGGoat;
class AGGPhysicsActor_BalloonHolder;
class AGGPhysicsActor_HeldBalloon;
class UMaterialInterface;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API UGGGearAbility_SpawnBalloon : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor_BalloonHolder> BalloonHolderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnUpOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnSideOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnSocketLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnSocketRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonFloatDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonInflateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonVerticalForceWhileInflating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCatchGoatInBalloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> PActorMaterialVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGBalloonVariation> GoatBalloonVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGBalloonVariation> NpcBalloonVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGBalloonVariation> VehicleBalloonVariations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MaxSpawnedBalloons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPCChaseSearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentHandSlot NPCChaseHandSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPCChaseFacingDot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AGGPhysicsActor_BalloonHolder*, AActor*> CatchTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPhysicsActor_BalloonHolder*> TrackedBalloons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPhysicsActor_BalloonHolder*> AttachedBalloonHolders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnFromLeftTip;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastActivationServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RepeatSpawnTimerHandle;
    
public:
    UGGGearAbility_SpawnBalloon();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTrackedBalloonHolderEndPlay(AActor* DestroyedActor, TEnumAsByte<EEndPlayReason::Type> Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatTurnedIntoBalloon(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable)
    void OnBalloonSpawned(AGGPhysicsActor_BalloonHolder* BalloonHolder, AGGPhysicsActor_HeldBalloon* BalloonPActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBalloonInflateEnded(AGGPhysicsActor_BalloonHolder* BalloonHolder, AGGPhysicsActor_HeldBalloon* BalloonPActor);
    
};

