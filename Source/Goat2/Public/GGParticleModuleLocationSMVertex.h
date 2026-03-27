#pragma once
#include "CoreMinimal.h"
#include "Particles/Location/ParticleModuleLocationBase.h"
#include "ESelectionType.h"
#include "GGParticleModuleLocationSMVertex.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGParticleModuleLocationSMVertex : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticMeshComponentActorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESelectionType SelectionType;
    
    UGGParticleModuleLocationSMVertex();

};

