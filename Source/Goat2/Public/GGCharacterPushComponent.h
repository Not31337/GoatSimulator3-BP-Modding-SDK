#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGHitRespond.h"
#include "GGOnPushed_SignatureDelegate.h"
#include "GGOnStumble_SignatureDelegate.h"
#include "GGRecentlyHitActor.h"
#include "ImpulseDamageEvent.h"
#include "RagdollStateChangeSettings.h"
#include "Templates/SubclassOf.h"
#include "GGCharacterPushComponent.generated.h"

class AActor;
class ACharacter;
class AGGCharacter;
class AGGNPC;
class UAnimMontage;
class UDamageType;
class UGGCharacterPushComponent;
class ULSCharacterMovementComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGCharacterPushComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnStumble_Signature OnStumbleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnStumble_Signature OnStumbleOther;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnPushed_Signature OnPushEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnPushed_Signature OnPushOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGetPushedByOverlappingPActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGHitRespond HitRespondFlagsPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGHitRespond HitRespondFlagsPActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGHitRespond HitRespondFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<AActor>> ActorClassesToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagDisablePushable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagDisableStumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagDisableRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleMinStumbleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageOnStumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingHitDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DefaultDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> OverlapObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ActorClassesToCollideWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRagdollNPCsWithSameSpeedWhenSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRagdollNPCsWithSameSpeedWhenJumping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StumbleSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleRagdollSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* OverlapComponentOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PrimitiveRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* GGCharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGRecentlyHitActor> RecentlyHitActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastActiveStumbleMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACharacter*> IgnoredCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActors;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlapResult> ActorHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastPushedBy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlapResult> AsyncResultsFromLastQuery;
    
public:
    UGGCharacterPushComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerTakeRagdollDamageOther(UGGCharacterPushComponent* StumbleComponent, const FImpulseDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerTakeRagdollDamage(const FImpulseDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerStumbleOther(UGGCharacterPushComponent* StumbleComponent, FVector Impulse);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerStumbleCharacter(float Speed, FVector Direction, AActor* StumbledBy);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerRemoveIgnoredActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerRemoveAllIgnoredActors();
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerPushOther(ACharacter* OtherCharacter, FVector PushVelocity, AActor* PushedBy);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerAddIgnoredActor(AActor* InActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRecentlyHitActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerReleased(AActor* CatchedActor, AActor* Catcher);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* InCharacterOwner, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerPreScaled(bool bIsBeingCatched);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerGrabbed(AGGCharacter* Grabber, AGGCharacter* OwnerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDropped(AGGCharacter* Grabber, AGGCharacter* OwnerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerCatched(AActor* CatchedActor, AActor* Catcher);
    
    UFUNCTION(BlueprintCallable)
    void OnNPCOwnerPooled(AGGNPC* NPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterOwnerLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastStumbleCharacter(float Speed, FVector Direction, AActor* StumbledBy);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPushCharacter(FVector PushVelocity, AActor* PushedBy);
    
};

