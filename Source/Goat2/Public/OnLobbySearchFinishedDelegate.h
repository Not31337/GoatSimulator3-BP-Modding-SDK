#pragma once
#include "CoreMinimal.h"
#include "GGLobbyInformation.h"
#include "OnLobbySearchFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbySearchFinished, bool, bSuccess, const TArray<FGGLobbyInformation>, FoundLobbies);

