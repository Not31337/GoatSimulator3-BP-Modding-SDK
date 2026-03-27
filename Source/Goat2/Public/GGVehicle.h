#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Pawn.h"
#include "Curves/CurveFloat.h"
#include "Engine/NetSerialization.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ClientInterpolationSettings.h"
#include "EApplicationMethod.h"
#include "EExitReason.h"
#include "EGGVehicleCameraFollow.h"
#include "EHealthParticleState.h"
#include "EPanicTypes.h"
#include "EStatusEffectTypes.h"
#include "ETypeOfDamage.h"
#include "EValidDrivers.h"
#include "EVehicleState.h"
#include "EVehicleType.h"
#include "ForceReleaseCatchedActor_SignatureDelegate.h"
#include "GGActorName.h"
#include "GGCatchableInterface.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGInteractInterface.h"
#include "GGLatestInstigatorInterface.h"
#include "GGLickableActorInterface.h"
#include "GGNamedActorInterface.h"
#include "GGStatusEffectInterface.h"
#include "GGTutorialInterface.h"
#include "GGWaterInterface.h"
#include "HardStartRoadSpline.h"
#include "ImpactParticleRange.h"
#include "LatestInstigator.h"
#include "MatElement.h"
#include "MeshDefaultMaterials.h"
#include "OnActorCatched_SignatureDelegate.h"
#include "OnActorLickDroppedDelegate.h"
#include "OnActorLickedDelegate.h"
#include "OnActorPreScaled_SignatureDelegate.h"
#include "OnActorReleased_SignatureDelegate.h"
#include "OnCharacterEnteredVehicleDelegate.h"
#include "OnCharacterExitVehicleDelegate.h"
#include "OnReachedPathTargetActorDelegate.h"
#include "OnReachedPathTargetLocationDelegate.h"
#include "OnRepDriverChangedDelegate.h"
#include "OnVehicleAbilityActivatedDelegate.h"
#include "OnVehicleAirBorneChangedDelegate.h"
#include "OnVehicleExplodedDelegate.h"
#include "OnVehicleHitDelegate.h"
#include "OnVehiclePooledOrMovedDelegate.h"
#include "OnVehicleRanOverNPCDelegate.h"
#include "PActorImpactSettings.h"
#include "RecentPrimComponent.h"
#include "StartleDetailsSettings.h"
#include "Templates/SubclassOf.h"
#include "VehicleCrashSound.h"
#include "GGVehicle.generated.h"

class AActor;
class ACharacter;
class AGGCharacter;
class AGGGoat;
class AGGNPC;
class AGGPhysicsActor;
class AGGPlayerController;
class AGGStatusEffectBase;
class AGGVehicle;
class AGGVehicleAIController;
class AGGVehicleSpawner;
class APhysicsVolume;
class APlayerController;
class UAbilitySystemComponent;
class UArrowComponent;
class UAudioComponent;
class UBehaviorTree;
class UBoxComponent;
class UCameraComponent;
class UCameraShakeBase;
class UDataTable;
class UGGCameraFovController;
class UGGRoadSplineComponent;
class UGGStatusEffectManager;
class UGGVehicleAbility;
class UGGVehicleAppearanceManager;
class UGGVehicleAttributeSet;
class UGGVehicleEngineSoundController;
class UGGWaterFloatingComponent;
class UGameplayEffect;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMeshComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPawnMovementComponent;
class UPhysicalMaterial;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class USoundBase;
class USoundCue;
class USpringArmComponent;
class UStaticMesh;
class UWheeledVehicleMovementComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGVehicle : public APawn, public IGGInteractInterface, public IGGStatusEffectInterface, public IGGWaterInterface, public IAbilitySystemInterface, public IGGHeadbuttableObjectInterface, public IGGLickableActorInterface, public IGGNamedActorInterface, public IGGLatestInstigatorInterface, public IGGCatchableInterface, public IGGTutorialInterface {
    GENERATED_BODY()
public:
protected:
    UAbilitySystemComponent* GetAbilitySystemComponent() const override;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* VehicleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* VehicleOverlapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CameraSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultSprintArmOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCameraFovController* CameraFovController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGVehicleAttributeSet* VehicleAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGWaterFloatingComponent* FloatingComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGVehicleAppearanceManager* AppearanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MiddleFeeler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* LeftFeeler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* RightFeeler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* LeftBackFeeler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* RightBackFeeler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ScrapeEffectComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* EngineAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* CrashAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* BrakeAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* HornAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ScrapeAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGVehicleEngineSoundController* EngineSoundController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VehicleDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleType VehicleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePlacementWithoutSpawnerWarning;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EVehicleState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EngineOn, meta=(AllowPrivateAccess=true))
    bool EngineOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanBeEntered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Driver, meta=(AllowPrivateAccess=true))
    AGGCharacter* Driver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlippedOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpeedKPH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bVehicleInputDisabled;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScalePassengersWithVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EValidDrivers> ValidDriverTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartAsGhostEditorPlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateAppearanceEditorPlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GenerateWithRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanRoamRandomly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReturnToGhostAfterExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHardStartRoadSpline StartingRoadSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollisionCheckBoundsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MiddleFeelerTraceBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFeelerIgnoreLandscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBroadcastCrashSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopForAfterHeadbutt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReachedPathTargetActor OnReachedPathTargetActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReachedPathTargetLocation OnReachedPathTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CrashTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RanOverTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RunOverByTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings NPCEjectStartleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings VehicleHitStartleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ShellMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnAppearanceRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SplineSpeedGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> VehicleSpeedGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> NPCVehSpeedGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SlowDownMultiplierGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImportantVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehiclePooledOrMoved OnVehiclePooledOrMoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPC> OverrideNPCDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceManagerRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* EnterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ExitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* IgnitionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakeSoundThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDrifting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonBrakeSideVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakeVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasExploded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ImpactInputRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DamageOutputRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfLaunchPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETypeOfDamage> ValidDamageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplosionParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ExplosionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor> WreckedVehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* WreckedVehicleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SmokeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FireParticle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleExploded OnVehicleExploded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionNotifyRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExplosionChanceToPanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPanicTypes ExplosionPanicType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings ExplosionStartleSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HPState, meta=(AllowPrivateAccess=true))
    EHealthParticleState HPState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LowHealthSmokeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LowHealthFireComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> ExplosionCameraShake;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_DesiredColorMaterialIndex, meta=(AllowPrivateAccess=true))
    int8 DesiredColorMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentStatusEffectMaterials, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> CurrentStatusEffectMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentOverrideMaterials, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> CurrentOverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> DefaultMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshDefaultMaterials> AdditionalMeshesDefaultMaterials;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraArmLengthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraArmLengthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCameraArmPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDriverCameraSettingsForPassengers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve GamepadCameraInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGVehicleCameraFollow CameraFollowVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVelocityForGamepadCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignCameraWithVehiclePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostDeltaFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> FovEaseFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FovEaseBlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFovStepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactDestructibleImpulseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedForDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedForCharacterRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterOverlapPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructibleOverlapPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelfSpinPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVelocityForDestructibleDamageApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumPActorSizeForImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleHit OnVehicleHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleRanOverNPC OnVehicleRanOverNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> VehicleDestructibleOverlapShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructibleOverlapShakeKphMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructibleOverlapShakeScalarMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinImpactVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactTriggerMinInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImpactParticleRange> ImpactParticleRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleCrashSound> VehicleCrashSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrashSoundInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPActorImpactSettings> PActorImpactParticleRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LandingImpactParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> LandingImpactCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingImpactEffectMinInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngleForLandingImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinZForceForLandingImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGVehicleAbility> AbilitySlot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGVehicleAbility> AbilitySlot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGVehicleAbility> VehicleAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> AlwaysLoadedGameplayCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PreloadCues;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> PreloadedGameplayCueClasses;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleAbilityActivated OnVehicleAbilityActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BoostStartParticleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BoostOngoingParticleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BoostStopParticleOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CarHornOn, meta=(AllowPrivateAccess=true))
    bool bCarHornOn;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterEnteredVehicle OnCharacterEnterVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterExitVehicle OnCharacterExitVehicle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollEjectVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EjectionForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSpinForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* RightfulOwner;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PassengerSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePassengerSocketPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PassengerSocketPrefixOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Passengers, meta=(AllowPrivateAccess=true))
    TArray<AGGCharacter*> Passengers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVehicleAirBorne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastAirBorneTimeStamp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleAirBorneChanged OnVehicleAirBorneChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRepDriverChanged OnRepDriverChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsReversing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsHandBraking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoInteractAtDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterAsPassengerTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGStatusEffectManager* StatusEffectManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AGGGoat*> LickedBy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorLicked OnActorLicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorLickDropped OnActorLickDropped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGGActorName CurrentActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NameModifierTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* WaitingForDriverName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DriverName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VehicleDisplayNameOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLatestInstigator LatestInstigator;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorPreScaled_Signature OnVehiclePreCatched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorCatched_Signature OnVehicleCatched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorReleased_Signature OnVehicleReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceReleaseCatchedActor_Signature ForceReleaseCatchedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* OurCatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SoonToBeCatcher;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FadeInMasterMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDoFadeIn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> FadeInDynamicMatInstances;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvokerActive;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TileGenerationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TileRemovalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClientInterpolationSettings ClientInterpolationSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWheeledVehicleMovementComponent* WheeledMoveComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicleAIController* VehicleController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanBeLicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSimulatingPhysics, meta=(AllowPrivateAccess=true))
    bool bIsSimulatingPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentPawnCollisionEnabled, meta=(AllowPrivateAccess=true))
    bool CurrentPawnCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsVehicleCollisionEnabled, meta=(AllowPrivateAccess=true))
    bool bIsVehicleCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPooled, meta=(AllowPrivateAccess=true))
    bool IsPooled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VehicleSpawner, meta=(AllowPrivateAccess=true))
    AGGVehicleSpawner* VehicleSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* OriginalOverridePhysMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentPrimComponent> RecentlyHitComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdatePhysMat, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* CurrentOverridePhysMat;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialText;
    
    AGGVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasHeadbuttedRecently() const;
    
    UFUNCTION(BlueprintCallable)
    void VehicleDisturbed();
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateLatestInstigator();
    
public:
    UFUNCTION(BlueprintCallable)
    void Turn(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartHold();
    
    UFUNCTION(BlueprintCallable)
    void StartGhostControl();
    
    UFUNCTION(BlueprintCallable)
    void StartFollowingSpline(UGGRoadSplineComponent* SplineComp, int32 StartIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SlowDownVehicle(float SpeedMultiplier, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleSlowDownMultiplier(float Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetVehicleInputDisabled(bool bNewDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleCollisionEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleAirBorne(bool bNewAirBorne);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleAbilityActiveState(bool bNewActive);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineSpeed(float SplineSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetSimulatePhysics(bool bActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPhysMatOverride(UPhysicalMaterial* NewOverride);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPawnCollisionEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPathTargetActor(AActor* NewTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetPathTarget(FVector NewLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOverrideMaterials(const TArray<FMatElement>& Materials);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOverrideMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNavAreaOn(bool bNewOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLatestInstigator(APawn* InInstigator, FGameplayTag Interaction, float ClearAfter, bool bUnragdollReset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInvokerActive(bool bNewActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetForceNPCBrake(bool bNewBrake);
    
    UFUNCTION(BlueprintCallable)
    void SetEngineOn(bool NewOn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDesiredColorMaterialIndex(const int32 DesiredIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanBeLicked(bool NewCanBeLicked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBackToDefaultMats();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReverse(bool NewReverse);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetIsHandBraking(bool NewBraking);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestExitVehicle(EExitReason ExitReason);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerOnOverlappedCharacterRagdolled(ACharacter* RagdollingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void Scroll(bool Up);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RoomForPassenger();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Respawn();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetVehicleSlowDown();
    
    UFUNCTION(BlueprintCallable)
    void ResetVehicle(bool WasDisturbed, bool CanReturnToGhost, bool ClearBB);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetOverrideMaterial();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetHealth();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetDesiredColorMaterialIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveStatusEffect(EStatusEffectTypes TypeToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RecreatePhysicsState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PrepareForLick();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PoolVehicle();
    
    UFUNCTION(BlueprintCallable)
    void PlayCrashSoundEffect(AActor* Actor, float ImpactSize);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PhysicsVolumeChanged(APhysicsVolume* NewVolume);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PassengerExit(AGGCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleSpawner();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdatePhysMat();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Passengers();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsVehicleCollisionEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSimulatingPhysics();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPooled();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HPState();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_EngineOn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Driver();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredColorMaterialIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStatusEffectMaterials();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPawnCollisionEnabled();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentOverrideMaterials();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CarHornOn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOccupantCountChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAppearanceChanged(AGGVehicle* Vehicle, const FString& RowName, const FString& AppearanceString);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObjectWasHeadbutted(AGGGoat* HeadbuttingGoat);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastVehicleImpulse(FVector_NetQuantize LinearImpulse, FVector_NetQuantize AngularImpulse);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastVehicleAbilityActivated(FGameplayTagContainer AbilityTags);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTeleport(FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastMoveFadeIn();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastIgnitionSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastExplodeVehicle();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEnterVehicle(AGGCharacter* Character, bool bIsDriver, FName Socket, bool bBlendCamera);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastCrashSound(AActor* Actor, float ImpactSize);
    
public:
    UFUNCTION(BlueprintCallable)
    void LiftVehicleAbility();
    
    UFUNCTION(BlueprintCallable)
    void LiftAbility2();
    
    UFUNCTION(BlueprintCallable)
    void LiftAbility1();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWheelInAir(int32 WheelIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVehiclePooled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVehicleInputDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVehicleInAir(bool DoDownTrace, float TraceLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavAreaOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLicked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvokerActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGoatInVehicle(AGGGoat* Goat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlippedOver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEngineOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterAPassenger(const AGGCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InWater();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Interact(AActor* SourceActor, float HeldFor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasStatusEffectByType(EStatusEffectTypes TypeToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasStatusEffectByClass(TSubclassOf<AGGStatusEffectBase> StatusEffectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOccupants() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGoatPassenger();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGoatDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGVehicleSpawner* GetVehicleSpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPawnMovementComponent* GetVehicleMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UGGStatusEffectManager* GetStatusEffectManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpeedKPH() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRequiredHoldDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGPlayerController*> GetPlayersInVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicalMaterial* GetPhysMatOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APhysicsVolume* GetPhysicsVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGCharacter*> GetPassengerSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetNPCRecentInteractDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNPCInteractionChance();
    
    UFUNCTION(BlueprintCallable)
    float GetMass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetLocalExitPointsForCharacter(const AGGCharacter* Character, int32 PointSeparation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLickInfo(FVector LickLocation, FName& BoneName, FRotator& MeshLickRotation, FVector& RelativeLickLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMeshComponent* GetLickableActorMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FLatestInstigator GetLatestInstigatorStruct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    APawn* GetLatestInstigator(FGameplayTag& OutInteractionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetInteractTextTitle(AGGPlayerController* InteractingPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetInteractTextBody(AGGPlayerController* InteractingPlayerController);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetExitLocation_K2(const AGGCharacter* Character, bool& bOutFoundFreeLocation) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystemComponent* GetExhaustPSC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDesiredColorMaterialIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVehicleState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCollisionCheckBounds(FVector& Bounds, FVector& LocationOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetBoostStartSound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetBoostLoopSound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetBoostEndSound();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAutoInteractPastDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGGoat*> GetAllGoatsInVehicle() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GameplayCuesLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void Forward(float Value);
    
    UFUNCTION(BlueprintCallable)
    void ForceLickDrop();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExplodeVehicle();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExitVehicleAsPassenger(AGGCharacter* Character, EExitReason ExitReason);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExitVehicle(EExitReason ExitReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EngineUpdate(bool IsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EndHold(float HeldFor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EjectCharacter(bool bWasStolen, bool bEjectWithForce);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EjectAllPassengers();
    
    UFUNCTION(BlueprintCallable)
    void DoAbilityFor(float Duration, int32 Ability);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DelayExplodeVehicle(float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CurrentPassengerAmount();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientBroadcastCrash(AGGGoat* Goat, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ClearStatusEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterExit(AGGCharacter* Character, bool WasEjected, bool WasStolen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterEnter(AGGCharacter* Character, bool AsPassanger, bool PlacedFromManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEnterVehicle(EValidDrivers DriverType) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAbilities();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeLicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeInteractedWith(AActor* SourceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeHeadbutted(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable)
    void BrakeUp();
    
    UFUNCTION(BlueprintCallable)
    void BrakeDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPResetForPoolOrMove(bool ForPool);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPCharacterSentFlying(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGGStatusEffectBase* ApplyStatusEffect(EStatusEffectTypes TypeToApply, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus);
    
    UFUNCTION(BlueprintCallable)
    void AddValueToVehicleSpeed(float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddValueToNPCVehSpeed(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorWasLicked(AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorStoppedBeingLicked(AGGGoat* LickingGoat);
    

    // Fix for true pure virtual functions not being implemented
};

