#pragma once
#include "CoreMinimal.h"
#include "GGSpawnerModifierInterface.h"
#include "GGSplineSpawnerModifier_PreventOverlap.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGSplineSpawnerModifier_PreventOverlap : public UGGSpawnerModifierInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Iterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveOverlapsAtTheEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsOffsetForRemovingOverlaps;
    
    UGGSplineSpawnerModifier_PreventOverlap();

};

