#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GGEventDiscoveryBroadcastVolume.generated.h"

class AGGEventBase;

UCLASS(Blueprintable)
class GOAT2_API AGGEventDiscoveryBroadcastVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGEventBase* Event;
    
    AGGEventDiscoveryBroadcastVolume(const FObjectInitializer& ObjectInitializer);

};

