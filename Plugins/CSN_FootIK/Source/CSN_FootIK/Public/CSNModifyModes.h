#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "CSNModifyModes.generated.h"

USTRUCT(BlueprintType)
struct FCSNModifyModes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneModificationMode> TranslationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneModificationMode> RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneModificationMode> ScaleMode;
    
    CSN_FOOTIK_API FCSNModifyModes();
};

