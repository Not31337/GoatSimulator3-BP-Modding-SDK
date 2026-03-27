#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "GGGameSession.generated.h"

UCLASS(Blueprintable)
class GOAT2_API AGGGameSession : public AGameSession {
    GENERATED_BODY()
public:
    AGGGameSession(const FObjectInitializer& ObjectInitializer);

};

