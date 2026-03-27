#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGMeshComponentInterface.h"
#include "GGOnSkeletalMeshHeadbuttedDelegate.h"
#include "OnTurnedSkelPhysActorDelegate.h"
#include "SkeletalPhysicsActorState.h"
#include "Templates/SubclassOf.h"
#include "GGSkeletalMeshComponent.generated.h"

class AActor;
class AController;
class AGGPhysicsActor_Skeletal;
class UDamageType;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGSkeletalMeshComponent : public USkeletalMeshComponent, public IGGMeshComponentInterface, public IGGHeadbuttableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnPhysicsActorStateUpdate, meta=(AllowPrivateAccess=true))
    FSkeletalPhysicsActorState PhysicsActorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBecomePhysicsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBecomePhysicsActorByActorDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGPhysicsActor_Skeletal> PhysicsActorClassToBecome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBecomePhysicsActorByDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBecomePhysicsActorByImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MomentumThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngularImpulse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTurnedSkelPhysActor OnTurnedSkelPhysActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnSkeletalMeshHeadbutted OnGGSkeletalMeshHeadbutted;
    
    UGGSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_OnPhysicsActorStateUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBecamePhysicsActorBlueprint(AGGPhysicsActor_Skeletal* NewPhysicsActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorTakeDamageWithEvent(float DamageAmount, FVector InImpulse, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorTakeDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorOnHitDelegate(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    

    // Fix for true pure virtual functions not being implemented
};

