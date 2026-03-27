#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "GGGameplayCue_Reinfaus_Charging.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGGameplayCue_Reinfaus_Charging : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ChargeAudio;
    
    AGGGameplayCue_Reinfaus_Charging(const FObjectInitializer& ObjectInitializer);

};

