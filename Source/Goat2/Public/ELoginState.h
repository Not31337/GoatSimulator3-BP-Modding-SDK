#pragma once
#include "CoreMinimal.h"
#include "ELoginState.generated.h"

UENUM(BlueprintType)
enum ELoginState {
    LS_NotLoggedIn,
    LS_FailedToLogin,
    LS_LoggingIn,
    LS_LoggedIn,
};

