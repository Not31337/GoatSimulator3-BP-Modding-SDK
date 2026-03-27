#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EGGHandcuffState.h"
#include "RagdollStateChangeSettings.h"
#include "Templates/SubclassOf.h"
#include "GGHandcuffedComponent.generated.h"

class AActor;
class ACharacter;
class APhysicsConstraintActor;
class UGGHandcuffedComponent;
class ULSCharacterMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGHandcuffedComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemoveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanHitAnimals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhysicsConstraintActor> PhysConstraintClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetHandcuffState, meta=(AllowPrivateAccess=true))
    EGGHandcuffState TargetHandcuffState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhysicsConstraintActor* BehindHandsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhysicsConstraintActor* HandsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhysicsConstraintActor* HandsToFeetConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhysicsConstraintActor* FeetConstraint;
    
public:
    UGGHandcuffedComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TriggerHandcuffs(float PreventStandupFor, bool bMinimumTwoCuffs);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveHandcuffs();
    
    UFUNCTION(BlueprintCallable)
    void RemoveBehindHandsConstraint();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetHandcuffState();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnOwnerUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* Character, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    static UGGHandcuffedComponent* GetHandCuffedComponent(AActor* ActorToSearch, const TSubclassOf<UGGHandcuffedComponent>& Class, bool bCreateNew);
    
};

