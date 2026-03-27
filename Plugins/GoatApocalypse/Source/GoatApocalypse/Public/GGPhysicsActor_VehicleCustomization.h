#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GGPhysicsActor.h"
#include "GGPhysicsActor_VehicleCustomization.generated.h"

class AActor;
class AGGPhysicsActor_VehicleCustomization;
class UGGVehicleCustomizationDataAsset;
class UObject;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGPhysicsActor_VehicleCustomization : public AGGPhysicsActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DataAsset, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGGVehicleCustomizationDataAsset> DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* HighlightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HighlightedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGVehicleCustomizationDataAsset* DataAssetLoaded;
    
    AGGPhysicsActor_VehicleCustomization(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AGGPhysicsActor_VehicleCustomization* SpawnVehicleCustomizationPActor(const UObject* WorldRef, const FTransform& SpawnTransform, TSoftObjectPtr<UGGVehicleCustomizationDataAsset> InDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DataAsset();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

