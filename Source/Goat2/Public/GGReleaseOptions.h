#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ImpulseDamageEvent.h"
#include "Templates/SubclassOf.h"
#include "GGReleaseOptions.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct GOAT2_API FGGReleaseOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImpulseDamageEvent DamageEvent;
    
    FGGReleaseOptions();
};

