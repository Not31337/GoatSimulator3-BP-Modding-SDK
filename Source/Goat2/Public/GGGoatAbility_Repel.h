#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGGoatAbility.h"
#include "ImpulseDamageEvent.h"
#include "RagdollStateChangeSettings.h"
#include "StartleDetailsSettings.h"
#include "WeightedElement_String.h"
#include "GGGoatAbility_Repel.generated.h"

class AActor;
class ACharacter;
class AGGGoat;
class UAnimMontage;
class ULSCharacterMovementComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGoatAbility_Repel : public UGGGoatAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartLocationBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepelDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepelPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRepelPowerVelocityChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepelHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDistanceFromGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepelCharacterImpulsePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepelZValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontagePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawOverlapShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepelOnRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RepelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RepelledByTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTakeRagdollAuthorityFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_String> ActorHitReactionWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorHitReactionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorHitLookAtDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings ActorHitStartleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartleDetailsSettings NearbyRepelStartleSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentAbilityMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LastRepelledActors;
    
public:
    UGGGoatAbility_Repel();

protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ReplicateRepelImpulseServer(const TArray<FImpulseDamageEvent>& DamageEvents, const TArray<AActor*>& TargetActors);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReplicateOnRepelStartedServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReplicateOnRepelEndedServer();
    
    UFUNCTION(BlueprintCallable)
    bool RepelImpulseDelayed();
    
public:
    UFUNCTION(BlueprintCallable)
    void RepelImpulse(bool SaveRepelledActors, bool ApplySweep, bool IgnoreSavedActors);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnRepelStarted(AGGGoat* GoatThatStarted);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndRepel();
    
    UFUNCTION(BlueprintCallable)
    void CreateRepelNotification(AGGGoat* Goat, FText RepelledThingName);
    
    UFUNCTION(BlueprintCallable)
    void CharacterRagdolled(ULSCharacterMovementComponent* MovementComp, ACharacter* Character, const FRagdollStateChangeSettings& StateChangeSettings);
    
};

