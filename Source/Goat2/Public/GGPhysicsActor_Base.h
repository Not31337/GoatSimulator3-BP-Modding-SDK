#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EApplicationMethod.h"
#include "EPactorCulldistanceScaleIdentifier.h"
#include "EStatusEffectTypes.h"
#include "ForceReleaseCatchedActor_SignatureDelegate.h"
#include "GGActorName.h"
#include "GGCatchableInterface.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGLatestInstigatorInterface.h"
#include "GGLickableActorInterface.h"
#include "GGNamedActorInfo.h"
#include "GGNamedActorInterface.h"
#include "GGStatusEffectInterface.h"
#include "GGWaterInterface.h"
#include "LatestInstigator.h"
#include "MatElement.h"
#include "OnActorCatched_SignatureDelegate.h"
#include "OnActorLickDroppedDelegate.h"
#include "OnActorLickedDelegate.h"
#include "OnActorPreScaled_SignatureDelegate.h"
#include "OnActorReleased_SignatureDelegate.h"
#include "OnMaterialSetDelegate.h"
#include "OnObjectHeadbuttedDelegate.h"
#include "OnPickedUpDelegateDelegate.h"
#include "OnTakeDamageWithEventDelegate.h"
#include "PhysicsActorImpactSettings.h"
#include "Templates/SubclassOf.h"
#include "GGPhysicsActor_Base.generated.h"

class AController;
class AGGCharacter;
class AGGGoat;
class AGGStatusEffectBase;
class APawn;
class APhysicsVolume;
class UAudioComponent;
class UDataTable;
class UGGStatusEffectManager;
class UGGWaterFloatingComponent;
class UMaterialInterface;
class UMeshComponent;
class UParticleSystemComponent;
class UPhysicalMaterial;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class GOAT2_API AGGPhysicsActor_Base : public AActor, public IGGStatusEffectInterface, public IGGWaterInterface, public IGGNamedActorInterface, public IGGLickableActorInterface, public IGGHeadbuttableObjectInterface, public IGGLatestInstigatorInterface, public IGGCatchableInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGWaterFloatingComponent* FloatingComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugPrint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform InitialTransform;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> PhysSimStartIgnoredActors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDefaultToSimulatingPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartSimulationOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartSimOnHitWithVehicle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLatestInstigator LatestInstigator;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorPreScaled_Signature OnPhysicsActorPreScaled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorCatched_Signature OnVehicleCatched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorReleased_Signature OnVehicleReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceReleaseCatchedActor_Signature ForceReleaseCatchedActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* OurCatcher;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds InitialScaledBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowScaledBoundsDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgnoredByNavMeshSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnHitDamageVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeHeadbutted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnStatusEffectWhenDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnStatusAtHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectTypes StatusEffectToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlySpawnOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDamageOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterImpulsePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinImpactSizeForCharDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinImpactSizeForGoatDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinImpactSizeForVehicleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AGGCharacter*> GrabbedBy;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeGrabbed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickedUpDelegate OnPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickedUpDelegate OnDropped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachedToActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsAttachedToSomething;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShouldDetach, meta=(AllowPrivateAccess=true))
    bool ShouldDetach;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideImpactEffectMeshSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsActorImpactSettings ActorImpactEffectSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsActorImpactSettings ImpactEffectSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ImpactEffectComp;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_DesiredColorMaterialIndex, meta=(AllowPrivateAccess=true))
    int8 DesiredColorMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentMatElements, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> CurrentMatElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentStatusEffectMaterials, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> CurrentStatusEffectMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OriginalMatsOverride, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> OriginalMatsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> OriginalMats;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSwitchMat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMaterialSet OnMaterialSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentActorName, meta=(AllowPrivateAccess=true))
    FGGActorName CurrentActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGNamedActorInfo DefaultActorNameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NameModifierTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMeshNameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGNamedActorInfo ActorNameInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectHeadbutted OnObjectHeadbutted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorLicked OnActorLicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorLickDropped OnActorLickDropped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGStatusEffectManager* StatusEffectManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeOptimized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanChangeTickRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultToSightVisible;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTakeDamageWithEvent OnTakeDamageWithEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ImpactAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PawnCollisionOn, meta=(AllowPrivateAccess=true))
    bool PawnCollisionOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CollisionOn, meta=(AllowPrivateAccess=true))
    bool CollisionOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentCollisionProfile, meta=(AllowPrivateAccess=true))
    FName CurrentCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionEnabled::Type>> CachedCollisionStates;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPactorCulldistanceScaleIdentifier>, float> DistanceCullingScaleThresholds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPactorCulldistanceScaleIdentifier> CachedCulldistanceIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverriddenCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverriddenSignificanceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HideSelf, meta=(AllowPrivateAccess=true))
    bool HideSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdatePhysMat, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* CurrentOverridePhysMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PActorScale, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 PActorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* OriginalOverridePhysMat;
    
public:
    AGGPhysicsActor_Base(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopPhysicsSimulation();
    
    UFUNCTION(BlueprintCallable)
    void StartPhysicsSimulation();
    
    UFUNCTION(BlueprintCallable)
    void StartedGrab(AGGCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void ShouldDetachFromParent(bool Detach, bool TurnOnCollision, bool MarkForDestruction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool ShouldDefaultToSightVisible() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPhysMatOverride(UPhysicalMaterial* NewOverride);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPawnCollisionEnabled(bool NewEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPActorScale(FVector NewScale);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOriginalMatOverride(TArray<FMatElement> MatsOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetNewOverriddenSignificanceDistance(float NewOverridenSignificanceDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetNewOverriddenCullDistance(float NewOverridenCullDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMultipleMaterial(TArray<FMatElement> MatElements);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLatestInstigator(APawn* InInstigator, FGameplayTag Interaction, float ClearAfter, bool bUnragdollReset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetGoatSimName(const FText& NewName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDesiredColorMaterialIndex(int32 DesiredIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCollisionProfile(const FName& CollisionProfileName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCollisionEnabled(bool NewEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAISightVisible(bool bShouldBeVisible);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetOriginalMatOverride();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetMaterial();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetDesiredColorMaterialIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveStatusEffect(EStatusEffectTypes TypeToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemovePhysSimStartIgnoredActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveGoatSimNameModifier(FGameplayTag ModifierTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PrepareForLick();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PhysicsVolumeChanged(APhysicsVolume* NewVolume);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PActorWasDetached(AActor* DetachedFrom);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void OnTakeDamage_Multicast(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdatePhysMat();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShouldDetach();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PawnCollisionOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PActorScale();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OriginalMatsOverride();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HideSelf();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredColorMaterialIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStatusEffectMaterials();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentMatElements();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCollisionProfile();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentActorName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CollisionOn();
    
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHideSelf();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObjectWasHeadbutted(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable)
    void NewCharacterAttachment(AGGCharacter* Character, bool TurnOffCollision);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NetWakeup(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void NetGoDormant(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
public:
    UFUNCTION(BlueprintCallable)
    void LetGo(AGGCharacter* Character, bool ResetCollision);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHidingSelf();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrabbed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InWater();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasStatusEffectByType(EStatusEffectTypes TypeToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasStatusEffectByClass(TSubclassOf<AGGStatusEffectBase> StatusEffectClass);
    
    UFUNCTION(BlueprintCallable)
    void HandleConveyorMovement(FVector MoveDelta, ETeleportType TeleportType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UGGStatusEffectManager* GetStatusEffectManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSignificanceValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicalMaterial* GetPhysMatOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APhysicsVolume* GetPhysicsVolume();
    
    UFUNCTION(BlueprintCallable)
    float GetOverriddenSignificanceDistance();
    
    UFUNCTION(BlueprintCallable)
    float GetOverriddenCullDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMatElement> GetOriginalMatOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLickInfo(FVector LickLocation, FName& BoneName, FRotator& MeshLickRotation, FVector& RelativeLickLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMeshComponent* GetLickableActorMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FLatestInstigator GetLatestInstigatorStruct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    APawn* GetLatestInstigator(FGameplayTag& OutInteractionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOptimized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetIdentifierTags();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetHasActorName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetGoatSimName(bool WithStyling);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetFullGoatSimName(bool WithStyling);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDesiredColorMaterialIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCenterOfMass() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetAdditionalRepelImpulseOverride(AGGGoat* RepelInflictingGoat, FVector HitTraceStart, FVector HitTraceEnd, FVector HitLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GeneralEvent(int32 Integer, float Float);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceCharacterDrop(bool ResetCollision);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ClearStatusEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeLicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeHeadbutted(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGGStatusEffectBase* ApplyStatusEffect(EStatusEffectTypes TypeToApply, EApplicationMethod ApplicationMethod, AActor* SpreadFrom, TSubclassOf<AGGStatusEffectBase> StatusEffectClass, AGGStatusEffectBase* SpreadFromStatus);
    
    UFUNCTION(BlueprintCallable)
    void AddPhysSimStartIgnoredActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddGoatSimNameModifier(FGameplayTag ModifierTag, const FText& OverrideText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorWasLicked(AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorStoppedBeingLicked(AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ActorSimulatingPhysics() const;
    

    // Fix for true pure virtual functions not being implemented
};

