#pragma once
#include "CoreMinimal.h"
#include "OnIntroLoadedDelegate.generated.h"

class AGGIntro;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnIntroLoaded, AGGIntro*, Intro);

