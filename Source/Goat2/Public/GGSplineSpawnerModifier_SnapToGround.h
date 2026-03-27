#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EGGSnapMode.h"
#include "GGSpawnerModifierInterface.h"
#include "GGSplineSpawnerModifier_SnapToGround.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGSplineSpawnerModifier_SnapToGround : public UGGSpawnerModifierInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGSnapMode SnapMode;
    
    UGGSplineSpawnerModifier_SnapToGround();

};

