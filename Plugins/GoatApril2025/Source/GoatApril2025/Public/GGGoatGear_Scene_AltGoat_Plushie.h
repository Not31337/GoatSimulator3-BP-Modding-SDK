#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGGoatGear_Scene_AltGoat.h"
#include "MeshMaterialMapping.h"
#include "Templates/SubclassOf.h"
#include "GGGoatGear_Scene_AltGoat_Plushie.generated.h"

class AActor;
class AGGNPC_Humanoid;
class AGGPhysicsActor;
class UGGPlushieNPCComponent;
class UGGPlushiePActorComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPRIL2025_API UGGGoatGear_Scene_AltGoat_Plushie : public UGGGoatGear_Scene_AltGoat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlushieTransformDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TraceMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStaticMeshComponent> TraceMeshComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TraceMeshComponentRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceMeshComponentRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceMeshComponentScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshMaterialMapping> PlushieMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshMaterialMapping> PlushieVehicleMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> IgnoredTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGPlushieNPCComponent> PlushieNPCComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGPlushiePActorComponent> PlushiePActorComponentClass;
    
    UGGGoatGear_Scene_AltGoat_Plushie(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TransformActors(const TArray<AActor*>& HitActors);
    
    UFUNCTION(BlueprintCallable)
    AGGPhysicsActor* PlushifyActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    float PlayBaaMontage();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnTransformedActorsMulticast(const TArray<AGGPhysicsActor*>& TransformedActors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransformedActors(const TArray<AGGPhysicsActor*>& TransformedActors);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivatedAbility();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnAbilityActivatedMulticast();
    
    UFUNCTION(BlueprintCallable)
    void ChibifyActor(AGGNPC_Humanoid* NPC);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ActivateAbilityServer(float ActivationTime, float ActivationDelay, const TArray<AActor*>& OverlappingActors);
    
};

