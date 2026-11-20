#pragma once
#include "CoreMinimal.h"
#include "GGGoatPlayerState.h"
#include "GGPlayerState_ThemePark.generated.h"

class UGGCurrencyPlayerStateComponent;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGPlayerState_ThemePark : public AGGGoatPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCurrencyPlayerStateComponent* CurrencyComponent;
    
    AGGPlayerState_ThemePark(const FObjectInitializer& ObjectInitializer);

};

