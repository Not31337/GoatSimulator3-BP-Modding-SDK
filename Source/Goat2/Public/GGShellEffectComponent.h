#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "GGShellEffectComponent.generated.h"

class AActor;
class AGGGoat;
class AGGNPC;
class AGGPhysicsActor;
class AGGVehicle;
class UGGShellEffectComponent;
class UMaterialInterface;
class UMeshComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGShellEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> ShellMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ShellMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SecondaryShellMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AffectedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor* AffectedPActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* AffectedGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* AffectedVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* AffectedNPC;
    
public:
    UGGShellEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMaterialOpacity(float NewOpacity);
    
    UFUNCTION(BlueprintCallable)
    void RemakeShellMeshes();
    
    UFUNCTION(BlueprintCallable)
    void OnGearWasUpdated(AGGGoat* Goat, const TArray<USceneComponent*>& CurrentGoatGear);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UGGShellEffectComponent*> GetShellEffectComponents(AActor* FromActor, TSubclassOf<UGGShellEffectComponent> SpecificClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGShellEffectComponent* GetShellEffectComponent(AActor* FromActor, TSubclassOf<UGGShellEffectComponent> SpecificClass);
    
    UFUNCTION(BlueprintCallable)
    static UGGShellEffectComponent* CreateNewShellEffect(AActor* NewAffectedActor, UMaterialInterface* NewShellMaterial, UMaterialInterface* NewSecondaryShellMaterial, TSubclassOf<UGGShellEffectComponent> SpecificClass);
    
};

