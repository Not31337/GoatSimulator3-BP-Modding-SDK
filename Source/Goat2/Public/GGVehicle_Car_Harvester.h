#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "GGVehicle_Car.h"
#include "RecentlyOverlapped.h"
#include "GGVehicle_Car_Harvester.generated.h"

class AActor;
class UAudioComponent;
class UBoxComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicsAsset;
class UPrimitiveComponent;
class URotatingMovementComponent;
class USoundBase;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGVehicle_Car_Harvester : public AGGVehicle_Car {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* HarvesterFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* HarvesterSpinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* HarvesterBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URotatingMovementComponent* SpinnerRotatingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SpinnerAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HarvestBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FrontOverlapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ShredsSprayParticleComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFrontPartsShownFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ShredParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ShredSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* GoatPhysAssetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehiclePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprayOnFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsOn, meta=(AllowPrivateAccess=true))
    bool bIsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSprayOn, meta=(AllowPrivateAccess=true))
    bool bIsSprayOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FrontPartsHidden, meta=(AllowPrivateAccess=true))
    bool bFrontPartsHidden;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentlyOverlapped> RecentlyHarvested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentlyOverlapped> RecentlyLaunched;
    
public:
    AGGVehicle_Car_Harvester(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TurnOffSpray();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHarvesterActive(bool NewOn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSprayOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FrontPartsHidden();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayShredEffect(FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HideFrontParts(bool bShouldHideParts);
    
    UFUNCTION(BlueprintCallable)
    void HarvestOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

