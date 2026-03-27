#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGFarmerGearBuilding.generated.h"

class UParticleSystem;
class USceneComponent;
class USoundBase;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGFarmerGearBuilding : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BuildingMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SpawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SpawnParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Mesh, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    AGGFarmerGearBuilding(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_Mesh();
    
};

