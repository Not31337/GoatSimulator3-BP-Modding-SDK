#pragma once
#include "CoreMinimal.h"
#include "GGInstinct.h"
#include "GGInstinct_Boomerang.generated.h"

UCLASS(Abstract, Blueprintable)
class GOATAPOCALYPSE_API AGGInstinct_Boomerang : public AGGInstinct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredNumTargetsToHit;
    
    AGGInstinct_Boomerang(const FObjectInitializer& ObjectInitializer);

};

