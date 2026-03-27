#pragma once
#include "CoreMinimal.h"
#include "OnConsoleClientTravelURLReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConsoleClientTravelURLReceived, const FString&, ServerURL);

