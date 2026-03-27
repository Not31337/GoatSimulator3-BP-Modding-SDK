#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Fur.h"
#include "GGGoatGear_Scene_Fur_GasGoat.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEARPACK_SUPERGOATS_API UGGGoatGear_Scene_Fur_GasGoat : public UGGGoatGear_Scene_Fur {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Particles;
    
    UGGGoatGear_Scene_Fur_GasGoat(const FObjectInitializer& ObjectInitializer);

};

