#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGPhysicsActor.h"
#include "GGReleaseOptions.h"
#include "Templates/SubclassOf.h"
#include "GGEggSaddleEgg.generated.h"

class AActor;
class AGGGoat;
class UGGDamageType_Base;
class UGGGoatGear_Static_EggSaddle;

UCLASS(Blueprintable)
class GOAT2_API AGGEggSaddleEgg : public AGGPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ContainsActor, meta=(AllowPrivateAccess=true))
    AActor* ContainsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGGGoat* OwnerGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_EggSaddle, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Static_EggSaddle* EggSaddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HasBeenThrown, meta=(AllowPrivateAccess=true))
    bool HasBeenThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HasHatched, meta=(AllowPrivateAccess=true))
    bool HasHatched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGDamageType_Base> ReleaseImpulseDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDamageOnRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AddedLaunchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReleaseActorWhenHatched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HatchOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShatterWhenHatched;
    
public:
    AGGEggSaddleEgg(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Throw();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldFollowPlayer() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReleaseContainedActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_HasHatched(bool PreviousHasHatched);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_HasBeenThrown(bool PreviousHasBeenThrown);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_EggSaddle(UGGGoatGear_Static_EggSaddle* PreviousEggSaddle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_ContainsActor(AActor* PreviousActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHatched();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceHatched(float DelayHatch);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastThrow();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReleaseContainedActor(AActor* InContainsActor, FVector ReleaseLocation, FGGReleaseOptions Options);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Hatch(const FVector& HatchImpulse);
    
};

