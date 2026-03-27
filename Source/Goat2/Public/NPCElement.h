#pragma once
#include "CoreMinimal.h"
#include "EGender.h"
#include "Templates/SubclassOf.h"
#include "NPCElement.generated.h"

class AGGNPC;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FNPCElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPC> NPCClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    GOAT2_API FNPCElement();
};

