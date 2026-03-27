#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGGoatPlayerState.h"
#include "GGPlayerState_Apocalypse.generated.h"

class AGGPlayerState_Apocalypse;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGPlayerState_Apocalypse : public AGGGoatPlayerState {
    GENERATED_BODY()
public:
    AGGPlayerState_Apocalypse(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnCurrency(int32 Amount, FVector SpawnLocation, bool bIsImportant);
    
    UFUNCTION(BlueprintCallable)
    void OnCactusStreakStarted(AGGPlayerState_Apocalypse* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnCactusStreakEnded(AGGPlayerState_Apocalypse* Player, int32 CactusCount, bool bNewHighScore, int32 HighScore);
    
    UFUNCTION(BlueprintCallable)
    void OnCactusStreakCactusDestroyed(AGGPlayerState_Apocalypse* Player, int32 IncreaseBy);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDestroyedCactus(int32 IncreaseBy);
    
};

