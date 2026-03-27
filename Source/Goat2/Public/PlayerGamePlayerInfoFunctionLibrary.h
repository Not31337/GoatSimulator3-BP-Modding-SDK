#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPlayerGamePlayerLobbyState.h"
#include "EPlayerGamePlayerState.h"
#include "PlayerGamePlayerInfo.h"
#include "PlayerGamePlayerInfoFunctionLibrary.generated.h"

class AGGGoat;
class AGGPlayerController;
class AGGPlayerState;
class APawn;

UCLASS(Blueprintable)
class UPlayerGamePlayerInfoFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayerGamePlayerInfoFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetScore(FPlayerGamePlayerInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EPlayerGamePlayerState::Type> GetPlayerState(FPlayerGamePlayerInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerIndex(FPlayerGamePlayerInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGPlayerController* GetPlayerController(FPlayerGamePlayerInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APawn* GetPawn(FPlayerGamePlayerInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetOutOfBoundsTimestamp(FPlayerGamePlayerInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EPlayerGamePlayerLobbyState::Type> GetLobbyState(FPlayerGamePlayerInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGGoat* GetGoat(FPlayerGamePlayerInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGPlayerState* GetGGPlayerState(FPlayerGamePlayerInfo Info);
    
};

