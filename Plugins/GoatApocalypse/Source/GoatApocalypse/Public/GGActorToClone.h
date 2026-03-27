#pragma once
#include "CoreMinimal.h"
#include "GGActorToClone.generated.h"

class AActor;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FGGActorToClone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
    GOATAPOCALYPSE_API FGGActorToClone();
};

