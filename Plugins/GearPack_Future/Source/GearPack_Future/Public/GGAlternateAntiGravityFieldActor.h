#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/NetSerialization.h"
#include "Templates/SubclassOf.h"
#include "GGAlternateAntiGravityFieldActor.generated.h"

class AGGAntiGravityFieldVisualActor;
class AGGStatusEffectBase;
class UBoxComponent;

UCLASS(Blueprintable)
class GEARPACK_FUTURE_API AGGAlternateAntiGravityFieldActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize BoxExtents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGStatusEffectBase> StatusEffectToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGAntiGravityFieldVisualActor> GravityFieldVisualActorClass;
    
public:
    AGGAlternateAntiGravityFieldActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateDestroyed(AActor* PlayerState);
    
};

