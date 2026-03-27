#pragma once
#include "CoreMinimal.h"
#include "ECactusTypeVariants.h"
#include "CactusMeshAndType.generated.h"

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FCactusMeshAndType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedMeshVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECactusTypeVariants CurrentType;
    
    FCactusMeshAndType();
};

