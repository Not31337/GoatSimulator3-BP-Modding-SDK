#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LSAnimInstanceProxy.h"
#include "GGGoatAnimInstanceProxy.generated.h"

class UGGGoatAnimInstance;
class UGGGoatMovementComponent;

USTRUCT(BlueprintType)
struct FGGGoatAnimInstanceProxy : public FLSAnimInstanceProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TongueLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TongueActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInShallowWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float UnderWaterPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDiving;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHeadbuttCharging;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatAnimInstance* GoatAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGGoatMovementComponent* GoatMovementComponent;
    
public:
    GOAT2_API FGGGoatAnimInstanceProxy();
};

