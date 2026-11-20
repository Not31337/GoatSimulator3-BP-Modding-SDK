#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGEffectSpawnHolder.h"
#include "GGGoatGear_Skel_Body.h"
#include "RagdollStateChangeSettings.h"
#include "RecentActor.h"
#include "GGCottonCandyAttachedActor.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Body_CottonCandy.generated.h"

class AActor;
class ACharacter;
class AGGStatusEffectSticky;
class UGGCharacterPushComponent;
class ULSCharacterMovementComponent;
class UNiagaraSystem;
class UParticleSystem;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGGoatGear_Body_CottonCandy : public UGGGoatGear_Skel_Body {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAttachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldDurationToReleaseActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PossibleAttachBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseImpulsePActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseImpulseNpcs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStretchDistanceForAttachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGStatusEffectSticky> StickyStatusEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGEffectSpawnHolder EffectActorAttachedToGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ActorAttachParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActorAttachParticlesColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StickyStatusEffectOngoingParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CottonCandyInstinctTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CottonCandyInstinctTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachedActors, meta=(AllowPrivateAccess=true))
    TArray<FGGCottonCandyAttachedActor> AttachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentActor> RecentlyLaunchedActors;
    
    UGGGoatGear_Body_CottonCandy(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDetachAllActors();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDetachActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAttachActor(FGGCottonCandyAttachedActor AttachedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedActors();
    
    UFUNCTION(BlueprintCallable)
    void OnGoatUnRagdolled(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatPushedSomeone(UGGCharacterPushComponent* Pushed, FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatMeshHitSomething(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatHitSomething(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatCapsuleHitSomething(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedActorDestroyed(AActor* AttachedActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastActorAttachedToGear(AActor* Actor);
    
};

