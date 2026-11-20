#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GGInteractInterface.h"
#include "GGPhysicsActor.h"
#include "BubbleCatchedState.h"
#include "Templates/SubclassOf.h"
#include "GGPhysicsActor_BubbleBall.generated.h"

class AActor;
class AGGCharacter;
class AGGGoat;
class AGGNPC;
class AGGPlayerController;
class UBubbleBallCounterComponent;
class UMaterialInstanceDynamic;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class AGGPhysicsActor_BubbleBall : public AGGPhysicsActor, public IGGInteractInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> BounceSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceRetriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVelocityForBounceSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNormalVelocityForBounce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> CatchSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> CatchParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> PopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> PopParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonPlayerLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoatSteeringForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BubbleHealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadbuttImpulsePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadbuttCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BoundsRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScaleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, float> ClassBoundScaleModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultScaleModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RumbleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve BounceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BubbleGumThingsInstinctTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BubbleGumBounceInstinctTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BubbleGumBounceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> InvalidCatchClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBubbleBallCounterComponent* AssociatedCounter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CatchState, meta=(AllowPrivateAccess=true))
    FBubbleCatchedState CatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* CharacterInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* NPCInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* GoatInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PopVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PopSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BounceSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CatchVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* CatchSFX;
    
public:
    AGGPhysicsActor_BubbleBall(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlayerHeadbutt(FVector Direction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerExitBubbleBall();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CatchState();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInteractInput(AGGPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHeadbuttInput(AGGPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerAbilityInput();
    
    UFUNCTION(BlueprintCallable)
    void OnNPCPooledOrMoved(AGGNPC* NPC, bool WasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterTeleported(AGGCharacter* Character, const FTransform& OldTransform);
    
    UFUNCTION(BlueprintCallable)
    void OnActorInsideDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReleaseCatchedActor(AActor* ActorToRelease, const FVector& ReleaseLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayHeadbuttMontage();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCatchActorTriggerInstinct(AGGGoat* InstinctOwner);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCatchActor(AActor* ActorToCatch, const FVector& HoldingLocation);
    
    UFUNCTION(BlueprintCallable)
    void EffectsLoaded();
    

    // Fix for true pure virtual functions not being implemented
};

