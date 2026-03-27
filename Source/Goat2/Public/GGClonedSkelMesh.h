#pragma once
#include "CoreMinimal.h"
#include "GGClonedSkelMesh.generated.h"

class USkeletalMesh;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct GOAT2_API FGGClonedSkelMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMasterPose;
    
    FGGClonedSkelMesh();
};

