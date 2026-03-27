#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Static_Base.h"
#include "GGGoatGear_Static_Wings.generated.h"

class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_Wings : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FlyingParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* FlyingSound;
    
    UGGGoatGear_Static_Wings(const FObjectInitializer& ObjectInitializer);

};

