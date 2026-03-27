#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Static.h"
#include "GGSoundAndParticleGameplayCue.generated.h"

class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API UGGSoundAndParticleGameplayCue : public UGameplayCueNotify_Static {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
public:
    UGGSoundAndParticleGameplayCue();

};

