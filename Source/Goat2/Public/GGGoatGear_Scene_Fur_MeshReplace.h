#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Fur.h"
#include "GGGoatGear_Scene_Fur_MeshReplace.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Scene_Fur_MeshReplace : public UGGGoatGear_Scene_Fur {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* FurMeshToUse;
    
    UGGGoatGear_Scene_Fur_MeshReplace(const FObjectInitializer& ObjectInitializer);

};

