#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/Scene.h"
#include "Curves/CurveFloat.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "AbilitySystemInterface.h"
#include "GameplayAbilitySpec.h"
#include "GameplayCueInterface.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BaaSoundOverride.h"
#include "CharacterCollisionState.h"
#include "DefaultGearOverrides.h"
#include "EApplicationMethod.h"
#include "EGoatAbilitySlot.h"
#include "EStatusEffectTypes.h"
#include "ETeleportVehicleHandle.h"
#include "FurSplineOverride.h"
#include "GGCharacter.h"
#include "GGGameSetting.h"
#include "GGGoatGearPreviewInterface.h"
#include "LickedComponent.h"
#include "MatElement.h"
#include "OnAltGoatChangedDelegate.h"
#include "OnCrashedIntoDelegate.h"
#include "OnEnterPlayerWorldAreaDelegate.h"
#include "OnExitPlayerWorldAreaDelegate.h"
#include "OnGearAbilityActivatedDelegate.h"
#include "OnGoatBaaDelegate.h"
#include "OnGoatBackKickingDelegate.h"
#include "OnGoatDroppedLickedActorDelegate.h"
#include "OnGoatEmoteEndedDelegate.h"
#include "OnGoatEmoteStartedDelegate.h"
#include "OnGoatHeadbuttedActorDelegate.h"
#include "OnGoatHeadbuttingDelegate.h"
#include "OnGoatKickedActorDelegate.h"
#include "OnGoatLickActorDelegate.h"
#include "OnGoatMissedLickDelegate.h"
#include "OnGoatStartedBaaingDelegate.h"
#include "OnGoatStartedHeadbuttingDelegate.h"
#include "OnGoatStartedLickingDelegate.h"
#include "OnPlayerEnteredThroneRoomDelegate.h"
#include "OnPlayerExitedThroneRoomDelegate.h"
#include "PlayerVehicleIshDelegateDelegate.h"
#include "StartleDetailsSettings.h"
#include "Templates/SubclassOf.h"
#include "GGGoat.generated.h"

class AActor;
class AGGGoat;
class AGGGoatTower;
class AGGNPC_Humanoid;
class AGGPlayerController;
class AGGPlayerState;
class AGGPlayerWorldAreaVolume;
class AGGStatusEffectBase;
class AGGVehicle;
class APawn;
class APhysicsVolume;
class UAbilitySystemComponent;
class UAnimMontage;
class UAudioComponent;
class UCameraComponent;
class UCameraShakeBase;
class UCapsuleComponent;
class UGFurComponent;
class UGGAlternativeGoatDataAsset;
class UGGAnimNotify;
class UGGFootstepComponent;
class UGGGoatAbility;
class UGGGoatAbility_BackKick;
class UGGGoatAbility_ChargeHeadbutt;
class UGGGoatAbility_Headbutt;
class UGGGoatAttributeSet;
class UGGGoatEmote;
class UGGGoatGearInfoDataAsset;
class UGGGoatGearManager;
class UGGGoatGearPreviewManager;
class UGGGoatGear_Scene_Horns;
class UGGGoatMovementComponent;
class UGGGoatSpringArmComponent;
class UGGGrindableSplineComponent;
class UGGMiniGamePlayerComp;
class UGGNeckRagdollComponent;
class UGGTeleportAreaDataAsset;
class UGGWorldSave;
class UGameplayAbility;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class UMeshComponent;
class UObject;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicsHandleComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USoundBase;
class USoundClass;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGGoat : public AGGCharacter, public IAbilitySystemInterface, public IGameplayCueInterface, public IGGGoatGearPreviewInterface {
    GENERATED_BODY()
public:
protected:
    UAbilitySystemComponent* GetAbilitySystemComponent() const override;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatSpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGearManager* GoatGearManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGearPreviewManager* GoatGearPreviewManager;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    //UStaticMeshComponent* HornComponent;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    //USkeletalMeshComponent* SkeletalHornComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* BaaAudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* BaaSoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundClass* BaaMenuPreviewSoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatAttributeSet* GoatAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGNeckRagdollComponent* NeckRagdollComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* PushOverlapComponent;
    
    void MulticastTeleportGoat_Implementation(FVector_NetQuantize Location, FRotator Rotation, const AActor* RelativeActor, ETeleportVehicleHandle VehicleHandle, bool bSetMoveMode, TEnumAsByte<EMovementMode> MoveMode, AGGVehicle* TeleportInto);

    void MulticastSetMeshChannelResponse_Implementation(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> Response);

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> CurrentWorldAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceConsideredToBeTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticMeshImpactDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* NPCHitGoatSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, USoundBase*> GoatRagdollImpactSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, UParticleSystem*> GoatRagdollImpactParticles;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterPlayerWorldArea OnEnterPlayerWorldArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitPlayerWorldArea OnExitPlayerWorldArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNearestWorldAreaDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerWorldAreaVolume*> CurrentPlayerWorldAreaVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTeleportAreaDataAsset* WorldAreaTeleportArea;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEnteredThroneRoom OnPlayerEnteredThroneRoom;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerExitedThroneRoom OnPlayerExitedThroneRoom;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentGoatTower, meta=(AllowPrivateAccess=true))
    AGGGoatTower* CurrentGoatTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoatTower* LastEnteredGoatTower;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CloseUpGoatMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> LandingCameraShakeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingCameraShakeTriggerVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraDistanceAboveFollowBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* JumpParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PerfectLandParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PerfectLandSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> BouncyJumpLandingParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> BouncyJumpTrailParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> BouncyJumpingSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* SpeedLinesCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SpeedLineCurve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatMovementComponent* GoatMovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings PerfectJumpStartleSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 InputDirection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentEffectMaterials, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> CurrentEffectMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentOverrideBodyMaterials, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> CurrentOverrideBodyMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentStatusEffectMaterials, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> CurrentStatusEffectMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentBodyMaterials, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> CurrentBodyMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentBodyMaterials, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CurrentgFurMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> DefaultBodyMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatElement DefaultHornMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LocalMaterialOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParamCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* MaterialParamCollectionInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FoliageParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoliageParameterZOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGFurComponent* GFur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFurSplineOverride CurrentFurSplineOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFurSplineOverride CurrentFurSplinePreviewOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FurReplacementMesh, meta=(AllowPrivateAccess=true))
    USkeletalMesh* FurReplacementMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Scene_Horns* CurrentHornGear;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DefaultHorn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefaultGearOverrides DefaultHornOverrides;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentAltGoat, meta=(AllowPrivateAccess=true))
    UGGAlternativeGoatDataAsset* CurrentAltGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGGAlternativeGoatDataAsset> DefaultGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearInfoDataAsset* DefaultGoatInfoAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CanceledOnAltGoatSwitch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAltGoatChanged OnAltGoatChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> AlwaysLoadedGameplayCues;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGearAbilityActivated OnGearAbilityActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGoatAbility> HeadbuttAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatAbility_Headbutt* HeadbuttAbilityInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> PlayerHeadbuttSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatStartedHeadbutting OnGoatStartPlayingHeadbuttAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatHeadbuttedActor OnGoatHeadbuttedActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatHeadbutting OnGoatHeadbutting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanHeadbutt;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGoatAbility> ChargeHeadbuttAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UGGGoatAbility_ChargeHeadbutt* ChargeHeadbuttAbilityInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChargeHeadbuttStage, meta=(AllowPrivateAccess=true))
    int32 ChargeHeadbuttStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGoatAbility> BackKickAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatAbility_BackKick* BackkickAbilityInstance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatBackKicking OnGoatBackKicking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatKickedActor OnGoatKickedActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FBaaSoundOverride> BaaSoundOverrides;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatBaa OnGoatBaa;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatStartedBaaing OnGoatStartedBaaing;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LickedComponent, meta=(AllowPrivateAccess=true))
    FLickedComponent LickedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* LickPhysHandleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* ReversedLickPhysHandleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TongueRetractionInterpSpeedAfterDropLick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TongueLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TongueActive;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGoatAbility> LickAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableGearPartsWhenBeingLicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TongueGrabLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatLickActor OnGoatLickedActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatMissedLick OnGoatMissedLick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatStartedLicking OnGoatStartedLicking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatDroppedLickedActor OnGoatDroppedLickedActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanLick;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* HeadbuttMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ChargeHeadbuttMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LickMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BackKickMontage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CanAnimate, meta=(AllowPrivateAccess=true))
    bool bCanAnimate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CollisionState, meta=(AllowPrivateAccess=true))
    FCharacterCollisionState CollisionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSlipperyDisableCCDTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatEmote* CurrentEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGGGoatEmote*> EquippedEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteBlendOutTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatEmoteStarted OnGoatEmoteStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoatEmoteEnded OnGoatEmoteEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* GrindParticlesComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GrindParticleSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* GrindSoundComp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCrashedInto OnCrashedInto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentVehicleIsh, meta=(AllowPrivateAccess=true))
    APawn* CurrentVehicleIsh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerVehicleIshDelegate OnGoatEnteredVehicleIsh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerVehicleIshDelegate OnGoatExitedVehicleIsh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TeleportMaterialInstance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TeleportMatInstance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* KarmaBigHeadParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* KarmaSmallHeadParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* KarmaBodyParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SmallKarmaRewardAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MediumKarmaRewardAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BigKarmaRewardAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinKarmaAmountFullParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxKarmaAmountSmallParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ChaosHeadParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ChaosBodyParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostProcessingChaosTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings ChaosPostProcessingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceAboveGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BodySocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadSocketName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* KarmaHeadParticleComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GenericRagdolledHitTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HitAnotherProjectileTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MountedByTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GrabbedByTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AttackedByTextFormat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* GGPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasBegunPlayLocally, meta=(AllowPrivateAccess=true))
    bool bHasBegunPlayLocally;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfFishSlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfVentsTraveled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfFireworksUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfBusStopsDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UGGMiniGamePlayerComp* MiniGameComponent;
    
public:
    AGGGoat(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFurQuality();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleLadderFootstepSounds(bool bOnLadder);
    
    UFUNCTION(BlueprintCallable)
    void StopCurrentEmote();
    
    UFUNCTION(BlueprintCallable)
    void SetUseCustomStencil(const bool bInUseCustomStencil, int32 CustomStencilIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetTongueConstraintsLocked(bool ShouldBeLocked);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetOwnMeshesVisible(bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNeckRagdollDisabled(bool bShouldBeDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLickEnabled(bool NewEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLastEnteredGoatTower(AGGGoatTower* GoatTower, bool bSaveInFile);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadbuttEnabled(bool NewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetGFurVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanAnimate(bool NewCanAnimate);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraOverrideFocusRelativeLocation(FVector RelativeLocation, float BlendSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraArmValues(float Min, float Max);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetBodyMat(TArray<FMatElement> NewBodyMaterials, UMaterialInterface* gFurMaterial);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAltGoat(UGGAlternativeGoatDataAsset* NewGoat);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAbilityOverride(TSubclassOf<UGGGoatAbility> AbilityOverride, EGoatAbilitySlot Slot);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopCurrentEmote(UGGGoatEmote* Emote);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartleNPCsOnPerfectJump(AGGGoat* JumpingGoat, FVector Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartleNPCsOnPerfecLanding(AGGGoat* LandedGoat, FVector Location);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetLickEnabled(bool NewEnabled);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerSetInputDirection(FVector_NetQuantize10 NewInputDirection);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetHeadbuttEnabled(bool NewEnabled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestContraintBreak();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayEmote(UGGGoatEmote* Emote);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerInteract(UObject* InteractWith, float HeldFor);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerExecuteGameplayCue(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropLickedObject();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerBegunPlayLocally();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerApplyStatusEffectToSelf(EStatusEffectTypes StatusEffectType, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SaveGameStartLocation(FVector Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetToDefaultGoat();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetToDefaultBodyMat();
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideCameraFocus();
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraArmValues();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetAbilityOverride(EGoatAbilitySlot Slot);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveMiniGamePlayerComponent();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveBaaOverride(FGameplayTag Source);
    
    UFUNCTION(BlueprintCallable)
    void ReEnableCCD();
    
    UFUNCTION(BlueprintCallable)
    void ReDetachCamera();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PrepareForWorldInstanceSave(UGGWorldSave* WorldSaveInstance, bool& bNeedsToUpdateArea);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayOnPerfectLandingEffects(FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayOnGoatBouncyJumpEffects(int32 JumpCount, FVector Location);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayLandSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayJumpSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayEmote(UGGGoatEmote* Emote);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayCameraShakeOnLanded(const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void OverrideCameraAttachment(USceneComponent* AttachToComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LickedComponent();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_HasBegunPlayLocally();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FurReplacementMesh();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentVehicleIsh(APawn* PreviousVehicle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStatusEffectMaterials();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentOverrideBodyMaterials();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentGoatTower(AGGGoatTower* LastGoatTower);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentEffectMaterials();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentBodyMaterials();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentAltGoat();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ChargeHeadbuttStage();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CanAnimate();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRemoveChaosPostProcessing();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPerfectLanding(AGGGoat* Goat, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void OnPerfectJump(AGGGoat* Goat, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void OnMotorcycleAnimInstanceLayerLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnMeshPhysStateChanged(USkeletalMeshComponent* Component, bool bCreated);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKarmaRewarded(AGGGoat* Goat, int32 Amount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeadbuttEvent_K2(bool bHitSomething, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatTeleported(AGGCharacter* Character, const FTransform& OldTransform);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatBouncyJump(AGGGoat* Goat, int32 JumpCount, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void OnGearWasUpdated(AGGGoat* Goat, const TArray<USceneComponent*>& CurrentGoatGear);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquippedPreviewGearChildMesh(UMeshComponent* PreviewedMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEquippedPreviewGear(UMeshComponent* PreviewedMesh);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEffectsQualitySettingChanged(FGGGameSetting& InChangedSetting);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCommittedPreviewGear(UMeshComponent* PreviewedMesh, UGGGoatGearInfoDataAsset* CommitedDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnChaosRewarded(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnChaosAcquired(int32 Amount);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAnimNotifyTrigger(AGGCharacter* Character, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTeleportGoat(FVector_NetQuantize Location, FRotator Rotation, const AActor* RelativeActor, ETeleportVehicleHandle VehicleHandle, bool bSetMoveMode, EMovementMode MoveMode, AGGVehicle* TeleportInto);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetMeshChannelResponse(ECollisionChannel Channel, ECollisionResponse Response);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReleaseFromCaption();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayEmoteMontage(UGGGoatEmote* Emote);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingHeadbuttAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeckRagdoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlledOrOwned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLickingSomethingDangerous();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInThroneRoom();
    
    UFUNCTION(BlueprintCallable)
    bool IsInPlayerWorldArea(FGameplayTag TestPlayerWorldArea, bool bMatchChildren);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmoting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChargingHeadbutt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraAttachedToGoatRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityActiveWithTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityActiveWithClass(TSubclassOf<UGameplayAbility> CheckClass);
    
    UFUNCTION(BlueprintCallable)
    void Interact(UObject* InteractWith, float HeldFor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InArea(FGameplayTag WorldArea) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOverrideCameraFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBegunPlayLocally() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasALickedObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAbilityWithTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void HandleFootstepSound(FGameplayTag NotifyTag);
    
    UFUNCTION(BlueprintCallable)
    void GrindStarted(UGGGrindableSplineComponent* GrindSpline);
    
    UFUNCTION(BlueprintCallable)
    void GrindHyperspeedStarted(UGGGrindableSplineComponent* GrindSpline);
    
    UFUNCTION(BlueprintCallable)
    void GrindHyperspeedEnded(UGGGrindableSplineComponent* GrindSpline);
    
    UFUNCTION(BlueprintCallable)
    void GrindEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicsHandleComponent* GetReverseLickPhysicsHandle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetNearestPlayerWorldAreas(FVector GameStartLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGMiniGamePlayerComp* GetMiniGamePlayerComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetLocalMaterialOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicsHandleComponent* GetLickPhysicsHandle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLickedObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLickedComponent GetLickedComponentStruct();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetLickedComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBaaSoundOverride GetHighestPrioBaaOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPlayerState* GetGGPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGGPlayerController* GetGGPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGGoatGearPreviewManager* GetGearPreviewManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGGoatGearManager* GetGearManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetGearAimRotator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetFurReplacementMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UGGFootstepComponent* GetFootstepComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGGGoatEmote*> GetEquippedEmotes() const;
    
    UFUNCTION(BlueprintCallable)
    FMatElement GetDefaultHornMaterial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGGoatGearInfoDataAsset* GetDefaultGoatInfoAsset() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMatElement> GetDefaultBodyMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGGoatGearInfoDataAsset* GetDefaultBaaGear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGAlternativeGoatDataAsset* GetDefaultAltGoat() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMatElement> GetCurrentStatusEffectMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetCurrentPlayerWorldAreas() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMatElement> GetCurrentOverrideBodyMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentInputDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGGoatEmote* GetCurrentEmote() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMatElement> GetCurrentEffectMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentCameraArmValues() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMatElement> GetCurrentBodyMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGAlternativeGoatDataAsset* GetCurrentAltGoat() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetAltGoatDefaultBaaMontage();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FVector GetAdjustedTeleportLocation(FVector OriginLocation, bool bForceOffset, bool bIgnoreOtherGoats, float FloorCheckTraceDistOverride, float MaxHeightDifference, int32 MaxTries, float MaxRadius, float DistanceFromOtherPlayers);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FGameplayAbilitySpecHandle GetAbilitySpecHandleForSlot(EGoatAbilitySlot Slot) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableGearAbilityInput();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableGearAbilitiesAndEffects();
    
private:
    UFUNCTION(BlueprintCallable)
    void EnableAllGearAbilities(AActor* ThisGoat, AGGGoat* LickingGoat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EmoteStarted(UGGGoatEmote* Emote);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EmoteEnded(UGGGoatEmote* Emote, bool Interrupted);
    
    UFUNCTION(BlueprintCallable)
    void DropLickedObject();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableGearAbilitiesAndEffects();
    
private:
    UFUNCTION(BlueprintCallable)
    void DisableAllGearAbilities(AActor* ThisGoat, AGGGoat* LickingGoat);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UGGMiniGamePlayerComp* CreateMiniGamePlayerComponent(TSubclassOf<UGGMiniGamePlayerComp> MiniGameCompClass);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientSnipedCharacterText(const FText& CharName, const FText& PActorName);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientRunnedOverText(AGGVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientMountedByText(const FText& MountedByName);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientLickedByText(const FText& TextFormat, const FText& LickedByGoatName);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientKickedByText(const FText& TextFormat, const FText& KickedByGoatName);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientHitByText(const FText& HitByName);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientHitAnotherProjectileText(const FText& HitActorName, const FText& ProjectileName);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientHeadbuttedByText(const FText& TextFormat, const FText& HeadbuttedByGoatName);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientGrabbedByText(AGGNPC_Humanoid* Police);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAttackedByText(const FText& TextFormat, const FText& AttackedByName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CapsuleCompPhysicsVolumeChanged(APhysicsVolume* NewVolume);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CanLick();
    
    UFUNCTION(BlueprintCallable)
    bool CanHeadbutt();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CancelGearAbilitiesAndDisableInput();
    
    UFUNCTION(BlueprintCallable)
    void CancelAbilityWithTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAnimate() const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BroadcastHeadbuttEvents_Server(const TArray<UPrimitiveComponent*>& HeadbuttedPrimComps, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastHeadbuttEvents_Multicast(const TArray<UPrimitiveComponent*>& HeadbuttedPrimComps, const TArray<AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt);
    
public:
    UFUNCTION(BlueprintCallable)
    void BroadcastGoatBaa();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BroadcastBackKickEvents_Server(const TArray<UPrimitiveComponent*>& HeadbuttedPrimComps, const TArray<AActor*>& KickedActors);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastBackKickEvents_Multicast(const TArray<UPrimitiveComponent*>& BackkickedPrimComps, const TArray<AActor*>& KickedActors);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AltGoatUpdated(UGGAlternativeGoatDataAsset* NewGoat);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddBaaOverride(FGameplayTag Source, USoundBase* BaaSound, int32 Priority);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ForwardGameplayCueToParent() override PURE_VIRTUAL(ForwardGameplayCueToParent,);
    
};

