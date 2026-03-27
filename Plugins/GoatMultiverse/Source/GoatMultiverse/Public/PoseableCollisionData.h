#pragma once
#include "CoreMinimal.h"
#include "PoseableCollisionData.generated.h"

class UPhysicsAsset;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPoseableCollisionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BoneIndexes;
    
    GOATMULTIVERSE_API FPoseableCollisionData();
};

