#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "GGChatBeaconHost.generated.h"

class UGGOnlineManager;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API AGGChatBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGOnlineManager* OnlineManager;
    
public:
    AGGChatBeaconHost(const FObjectInitializer& ObjectInitializer);

};

