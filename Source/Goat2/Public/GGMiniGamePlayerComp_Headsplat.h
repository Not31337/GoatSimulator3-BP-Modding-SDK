#pragma once
#include "CoreMinimal.h"
#include "GGMiniGamePlayerComp.h"
#include "GGMiniGamePlayerComp_Headsplat.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGMiniGamePlayerComp_Headsplat : public UGGMiniGamePlayerComp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalSizeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalDistanceFromGoatMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalStartDistanceFromGoatMultiplier;
    
public:
    UGGMiniGamePlayerComp_Headsplat(const FObjectInitializer& ObjectInitializer);

};

