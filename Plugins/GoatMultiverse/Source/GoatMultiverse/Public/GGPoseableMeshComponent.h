#pragma once
#include "CoreMinimal.h"
#include "Components/PoseableMeshComponent.h"
#include "PoseableCollisionData.h"
#include "GGPoseableMeshComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGPoseableMeshComponent : public UPoseableMeshComponent {
    GENERATED_BODY()
public:
    UGGPoseableMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static FPoseableCollisionData GetPoseableCollisionData(USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void CreateCollision_Struct(FPoseableCollisionData CollisionData);
    
    UFUNCTION(BlueprintCallable)
    void CreateCollision_SkelMeshComp(USkeletalMeshComponent* RefSkeletalMeshComp);
    
    UFUNCTION(BlueprintCallable)
    void ClearCollision();
    
};

