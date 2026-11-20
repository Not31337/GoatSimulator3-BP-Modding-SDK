#pragma once
#include "CoreMinimal.h"
#include "GGGoatGameState.h"
#include "GGGameState_ThemePark.generated.h"

class UGGCurrencyGameStateComponent;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGGameState_ThemePark : public AGGGoatGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCurrencyGameStateComponent* CurrencyComponent;
    
    AGGGameState_ThemePark(const FObjectInitializer& ObjectInitializer);

};

