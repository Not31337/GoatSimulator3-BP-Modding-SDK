#pragma once
#include "CoreMinimal.h"
#include "CountNotificationParameters.h"
#include "GatherGoatParameters.h"
#include "InviteNotificationParameters.h"
#include "CurrentGatherEvent.generated.h"

class AGGPlayerState;

USTRUCT(BlueprintType)
struct FCurrentGatherEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GatherID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FGatherGoatParameters GatherParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FInviteNotificationParameters InviteNotificationParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bShowGoatCountNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FCountNotificationParameters CounterNotificationParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerState*> GatheredPlayers;
    
public:
    GOAT2_API FCurrentGatherEvent();
};

