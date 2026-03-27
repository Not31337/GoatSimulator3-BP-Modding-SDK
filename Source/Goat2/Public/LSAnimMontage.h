#pragma once
#include "CoreMinimal.h"
#include "LSAnimMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FLSAnimMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    GOAT2_API FLSAnimMontage();
};

