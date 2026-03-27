#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "MatElement.h"
#include "Templates/SubclassOf.h"
#include "GGLivingProp.generated.h"

class AActor;
class AGGPhysicsActor;
class AGGPhysicsActor_Base;
class UGGGearAbility_Reinfaus;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGLivingProp : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGearAbility_Reinfaus> ReinfausAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPhysicsActor* ParentPActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LeftEye;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RightEye;
    
    UGGLivingProp(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartJump();
    
    UFUNCTION(BlueprintCallable)
    void OnParentMaterialChanged(AGGPhysicsActor_Base* PhysActor, const TArray<FMatElement>& NewMaterials);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerShattered(AGGPhysicsActor* DestroyedOwner);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastJump();
    
};

