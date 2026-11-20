#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameplayTagContainer.h"
#include "GGGoatGear_Skel_Base.h"
#include "EGGTentacleState.h"
#include "GGTentacle.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Back_CthillaTentacles.generated.h"

class AActor;
class UDamageType;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGGoatGear_Back_CthillaTentacles : public UGGGoatGear_Skel_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenGrabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGrabbedWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ThrowSideAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ThrowElevationAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenSlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlapChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlapImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TentacleCollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> TentacleAnimBlendEasingFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToBlendAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SlapSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SlapParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* GrabSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GrabParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ThrowSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ThrowParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CthillaTentaclesInstinctTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGearActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGTentacle TentacleLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGTentacle TentacleRight;
    
    UGGGoatGear_Back_CthillaTentacles(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetTentacleState(bool bIsLeft, EGGTentacleState NewState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetGrabbedWaitTime(bool bIsLeft, float WaitTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSetConstraint(bool bIsLeft, AActor* Target);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastReleaseConstraint(bool bIsLeft, AActor* Target);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayThrowEffects(FName Socket);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlaySlapEffects(FVector HitPoint);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayGrabEffects(FName Socket);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastCreateConstraint(bool bIsLeft);
    
};

