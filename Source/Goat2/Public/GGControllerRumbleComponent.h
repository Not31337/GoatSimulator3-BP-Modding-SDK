#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EStatusEffectTypes.h"
#include "GGControllerRumbleEffectRow.h"
#include "GGGameSetting.h"
#include "GGControllerRumbleComponent.generated.h"

class AActor;
class AController;
class AGGCharacter;
class AGGExplosiveActor;
class AGGFireballProjectile;
class AGGGoat;
class AGGPlayerController;
class AGGStatusEffectBase;
class AGGVehicle;
class APawn;
class APlayerController;
class UDamageType;
class UDataAsset;
class UDataTable;
class UGGBouncyStaticMeshComponent;
class UGGForceFeedbackComponent;
class UGGGrindableSplineComponent;
class UGGStatusEffectManager;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGControllerRumbleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ForceFeedbackEffectsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ControllerRumbleSourceTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGGControllerRumbleEffectRow> DataTableMap;
    
public:
    UGGControllerRumbleComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WhileLocalGoatIsVehicleBraking(AGGGoat* LocalGoat, AGGVehicle* Vehicle, bool bIsHandBraking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WhileLocalGoatIsGrinding(AGGGoat* LocalGoat, bool bIsHyperspeedGrinding, UGGGrindableSplineComponent* GrindSpline);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WhileCurrentVehicleIsSpeedBoosting(AGGVehicle* Vehicle, bool bIsDriver, float Speed);
    
public:
    UFUNCTION(BlueprintCallable)
    static void StopForceFeedbackForPlayer(APlayerController* PlayerController, FGameplayTag ForceFeedbackEffect);
    
    UFUNCTION(BlueprintCallable)
    static UGGForceFeedbackComponent* SpawnForceFeedbackAttached(FGameplayTag ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGGForceFeedbackComponent* SpawnForceFeedbackAtLocation(const UObject* WorldContextObject, FGameplayTag ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayRumbleIfSettingIsEnabled(FGGGameSetting& InSetting);
    
public:
    UFUNCTION(BlueprintCallable)
    static void PlayForceFeedbackForPlayer(APlayerController* PlayerController, FGameplayTag ForceFeedbackEffect, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleExploded(AGGVehicle* Vehicle);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnPossessed(APawn* NewPawn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalGoatTakeDamage(AActor* DamagedGoat, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalGoatStartHyperspeedGrind(UGGGrindableSplineComponent* GrindSpline);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalGoatRagdollImpact(AGGGoat* Goat, float Speed, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalGoatNeckRagdollImpact(AGGGoat* Goat, float Speed, const FHitResult& Hit);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLocalGoatMeshHit(UPrimitiveComponent* GoatMesh, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalGoatLickedActor(AGGGoat* GoatLicking, AActor* LickedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalGoatJumpedWithModifier(AGGGoat* LocalGoat, UStaticMeshComponent* JumpedOn, bool bIsBouncyJump);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLocalGoatHeadbutting_Internal(AGGGoat* LocalGoat, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalGoatHeadbutting(AGGGoat* HeadbuttingGoat, bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt, const TArray<EStatusEffectTypes>& ActiveStatusEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalGoatHeadbutted(UObject* HeadbuttedObject, AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalGoatGetStatusEffect(AActor* GoatActor, UGGStatusEffectManager* Manager, AGGStatusEffectBase* NewStatusEffect, EStatusEffectTypes Type);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLocalGoatExitingVehicle(AGGCharacter* GoatCharacter, AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalGoatEnteringVehicle(AGGCharacter* GoatCharacter, AGGVehicle* Vehicle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalGoatBouncyJumped(AGGGoat* LocalGoat, int32 PreviousJumpCount, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalGoatBounced(AGGCharacter* Character, UGGBouncyStaticMeshComponent* BouncyComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLocalGoatBackkicking_Internal(AGGGoat* LocalGoat, bool bHitSomething, const TArray<AActor*>& KickedActors);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalGoatBackkicking(AGGGoat* BackkickingGoat, bool bHitSomething, const TArray<AActor*>& KickedActors, const TArray<EStatusEffectTypes>& ActiveStatusEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGoatPerfectLanding(AGGGoat* LandedGoat, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGoatPerfectJump(AGGGoat* JumpingGoat, FVector Location);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGoatJumped(AGGGoat* Goat, const FFindFloorResult& Floor, bool bWasBouncyJump);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGearPartUnlocked(UDataAsset* GearPart, FGameplayTag Context, AGGPlayerController* LocalPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFireballImpact(AGGFireballProjectile* Fireball);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExplosiveActorExploded(AGGExplosiveActor* ExplosiveActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentVehicleHit(AGGVehicle* Vehicle, AActor* OtherActor, UPrimitiveComponent* OtherComponent, float ImpactSize, float OtherImpactSize, FHitResult HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalGoatInVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalGoatDriving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasMeshMaterial(const UStaticMeshComponent* Mesh, const TArray<TSoftObjectPtr<UMaterialInterface>>& Materials);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceStartChargingHeadbutt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGGoat* GetLocalPossessedGoat() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopForceFeedback(FGameplayTag ForceFeedbackEffect);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayerForceFeedback(FGameplayTag ForceFeedbackEffect, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    
};

