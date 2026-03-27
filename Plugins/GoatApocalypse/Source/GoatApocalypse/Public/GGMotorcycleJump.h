#pragma once
#include "CoreMinimal.h"
#include "GGMotorcycleJump.generated.h"

class UAudioComponent;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGMotorcycleJump {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UAudioComponent* JumpChargeOngoingAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UAudioComponent* JumpFullyChargedOngoingAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> JumpChargeOngoingParticleComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> JumpFullyChargedOngoingParticleComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeStampPressedInput;
    
    FGGMotorcycleJump();
};

