#pragma once
#include "CoreMinimal.h"
#include "OnJoinCodeGeneratedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnJoinCodeGenerated, const FString&, JoinCode);

