#pragma once
#include "CoreMinimal.h"
#include "SingleAnimationPlayData.h"
#include "GGBodyKitMeshOffset.h"
#include "Templates/SubclassOf.h"
#include "GGVehicleBodyKitMesh.generated.h"

class UAnimInstance;
class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGVehicleBodyKitMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimInstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleAnimationPlayData AnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGBodyKitMeshOffset> MeshInstances;
    
    FGGVehicleBodyKitMesh();
};

