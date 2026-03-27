#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GGWandHornsPhysicsHandle.generated.h"

class AGGNPC;
class AGGVehicle;
class UGGGoatGear_Scene_Horns_WandHorns;
class UPhysicsHandleComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GEARPACK_MAGIC_API AGGWandHornsPhysicsHandle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* PhysicsHandleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector LocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* GrabbedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDonePickingUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UGGGoatGear_Scene_Horns_WandHorns* OwningHorns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ServerTimeAdded;
    
    AGGWandHornsPhysicsHandle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestHandleBreak();
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedToVehiclePooled(AGGVehicle* Vehicle, bool WasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedToNPCPooled(AGGNPC* NPC, bool WasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedToDestroyed(AActor* DestroyedActor);
    
};

