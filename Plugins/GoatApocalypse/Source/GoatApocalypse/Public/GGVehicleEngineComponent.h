#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGSimulatedEngineState.h"
#include "GGVehicleEngineComponent.generated.h"

class UGGSimulatedEngineConfig;
class USimpleWheeledVehicleMovementComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGVehicleEngineComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGSimulatedEngineConfig* EngineConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowEngineStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SimulatedEngine, meta=(AllowPrivateAccess=true))
    FGGSimulatedEngineState SimulatedEngine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleWheeledVehicleMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OwnerRootMesh;
    
    UGGVehicleEngineComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_SimulatedEngine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineRPMNormalizedWithIdleRPM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineRPMNormalized() const;
    
};

