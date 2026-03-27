#pragma once
#include "CoreMinimal.h"
#include "OnPrivilegeCheckedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPrivilegeChecked, bool, bHasPrivilege);

