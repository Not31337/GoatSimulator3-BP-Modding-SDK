#pragma once
#include "CoreMinimal.h"
#include "OnIntroFinishedDelegate.generated.h"

class AGGIntro;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIntroFinished, AGGIntro*, Intro);

