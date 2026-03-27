#pragma once
#include "CoreMinimal.h"
#include "Particles/Location/ParticleModuleLocationBase.h"
#include "ESplineSpawnType.h"
#include "GGParticleModuleLocationSpline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGParticleModuleLocationSpline : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplineComponentActorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineSpawnType SplineSpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowSplineStep;
    
    UGGParticleModuleLocationSpline();

};

