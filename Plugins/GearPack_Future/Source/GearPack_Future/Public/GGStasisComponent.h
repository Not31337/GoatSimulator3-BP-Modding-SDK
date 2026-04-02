#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGStasisComponent.generated.h"

class AActor;
class AController;
class AGGGoat;
class AGGPhysicsActor_Base;
class AGGVehicle;
class UDamageType;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_FUTURE_API UGGStasisComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ActorFrozenInPlaceParticle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor_Base* StasisPhysActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* StasisVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* OngoingStasisParticle;
    
public:
    UGGStasisComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnVehicleSignificanceChanged(AGGVehicle* Vehicle, float NewSignificance, float OldSignificance);
    
    UFUNCTION(BlueprintCallable)
    void OnVehiclePooledOrMoved(AGGVehicle* Vehicle, bool WasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnPActorSignificanceChanged(AGGPhysicsActor_Base* PActor, float NewSignificance, float OldSignificance);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerCatched(AActor* CatchedActor, AActor* Catcher);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnActorLicked(AActor* LickedActor, AGGGoat* LickingGoat);
    
};

