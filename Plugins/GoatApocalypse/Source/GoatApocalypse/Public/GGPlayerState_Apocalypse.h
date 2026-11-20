#pragma once
#include "CoreMinimal.h"
#include "GGGoatPlayerState.h"
#include "GGPlayerState_Apocalypse.generated.h"

class AGGPlayerState_Apocalypse;
class UGGCurrencyPlayerStateComponent;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGPlayerState_Apocalypse : public AGGGoatPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCurrencyPlayerStateComponent* CurrencyComponent;
    
    AGGPlayerState_Apocalypse(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnCactusStreakStarted(AGGPlayerState_Apocalypse* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnCactusStreakEnded(AGGPlayerState_Apocalypse* Player, int32 CactusCount, bool bNewHighScore, int32 HighScore);
    
    UFUNCTION(BlueprintCallable)
    void OnCactusStreakCactusDestroyed(AGGPlayerState_Apocalypse* Player, int32 IncreaseBy);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDestroyedCactus(int32 IncreaseBy);
    
};

