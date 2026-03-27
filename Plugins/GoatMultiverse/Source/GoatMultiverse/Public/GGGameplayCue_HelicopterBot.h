#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "GGGameplayCue_HelicopterBot.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGGameplayCue_HelicopterBot : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SoundComponent;
    
    AGGGameplayCue_HelicopterBot(const FObjectInitializer& ObjectInitializer);

};

