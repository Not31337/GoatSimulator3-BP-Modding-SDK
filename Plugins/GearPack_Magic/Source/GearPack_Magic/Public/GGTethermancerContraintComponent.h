#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "GameplayTagContainer.h"
#include "ReplicatedConstraintData.h"
#include "GGTethermancerContraintComponent.generated.h"

class AActor;
class AGGCharacter;
class AGGFlyingBroom;
class AGGNPC;
class AGGVehicle;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_MAGIC_API UGGTethermancerContraintComponent : public UPhysicsConstraintComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedConstraintData, meta=(AllowPrivateAccess=true))
    FReplicatedConstraintData ReplicatedConstraintData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidConstrainComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ChainEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ChainEffectParticle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TetherAbilityTag;
    
public:
    UGGTethermancerContraintComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedConstraintData();
    
    UFUNCTION(BlueprintCallable)
    void OnFlyingBroomToggledPhysics(AGGFlyingBroom* FlyingBroom);
    
    UFUNCTION(BlueprintCallable)
    void OnConstraintVehiclePooledCallback(AGGVehicle* Vehicle, bool WasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnConstraintNpcPooledCallback(AGGNPC* NPC, bool WasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnConstraintCharacterTeleportedCallback(AGGCharacter* Character, const FTransform& OldTransform);
    
    UFUNCTION(BlueprintCallable)
    void OnConstraintBrokenCallback(int32 ConstraintIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnConstraintActorDestroyedCallback(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnConstraintActorCaughtCallback(AActor* CatchedActor, AActor* Catcher);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstrainedComponents(FReplicatedConstraintData ConstraintData);
    
    UFUNCTION(BlueprintCallable)
    void ConstrainComponents();
    
};

