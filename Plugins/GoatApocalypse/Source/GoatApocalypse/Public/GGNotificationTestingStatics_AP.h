#pragma once
#include "CoreMinimal.h"
#include "GGNotificationTestingStatics.h"
#include "GGNotificationTestingStatics_AP.generated.h"

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGNotificationTestingStatics_AP : public UGGNotificationTestingStatics {
    GENERATED_BODY()
public:
    UGGNotificationTestingStatics_AP();

    UFUNCTION(BlueprintCallable)
    void CreateVehicleCollectibleNotification();
    
};

