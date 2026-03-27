#pragma once
#include "CoreMinimal.h"
#include "ParsedNews.h"
#include "OnNewsReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNewsReceived, const FParsedNews&, ParsedNews, bool, bWasSuccessful);

