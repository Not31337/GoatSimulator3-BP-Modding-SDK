#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Static_Base.h"
#include "GGGoatGear_Static_Crown.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_Crown : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CrownParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticleSocket;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CrownParticleComp;
    
public:
    UGGGoatGear_Static_Crown(const FObjectInitializer& ObjectInitializer);

};

