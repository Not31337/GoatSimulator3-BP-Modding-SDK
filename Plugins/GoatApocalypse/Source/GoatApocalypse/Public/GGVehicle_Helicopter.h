#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "GGVehicle.h"
#include "GGVehicle_Helicopter.generated.h"

class AActor;
class UGGHelicopterSettings;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGVehicle_Helicopter : public AGGVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialTextGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGHelicopterSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RotorBladeSpinningCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MainRotorThrust;
    
    AGGVehicle_Helicopter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerMove(FVector_NetQuantize Location, FRotator Rotation, FVector_NetQuantize LinearVelocity, FVector_NetQuantize AngularVelocity, float InMainRotorThrust);
    
    UFUNCTION(BlueprintCallable)
    void OnRotorBladesHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnRotorBladeOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRotorIdling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMainRotorPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMainRotorDeltaAngle(float DeltaSeconds) const;
    
};

