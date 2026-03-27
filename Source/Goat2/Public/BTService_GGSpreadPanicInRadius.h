#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EPanicTypes.h"
#include "BTService_GGSpreadPanicInRadius.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTService_GGSpreadPanicInRadius : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPanicTypes PanicType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanScareClowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawSphere;
    
    UBTService_GGSpreadPanicInRadius();

};

