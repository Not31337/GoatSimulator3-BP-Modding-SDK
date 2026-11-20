#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "ETelemetryEvent.h"
#include "ETelemetryState.h"
#include "GGTelemetrySubsystem.generated.h"

class AGGGameState;
class AGGQuestBase;

UCLASS(Blueprintable)
class GOAT2_API UGGTelemetrySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSessionRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SessionOrdinal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastKnownLifetimePlaytimeMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorldsEnteredThisSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CurrentSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CurrentGameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CurrentGameWorldId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentModeString;
    
public:
    UGGTelemetrySubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateGameModeState(AGGGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void SubmitString(const ETelemetryEvent EventID, const FString& StringKey, const FString& StringData);
    
    UFUNCTION(BlueprintCallable)
    void SubmitMap(const ETelemetryEvent EventID, const TMap<FString, FString>& StringFields, const TMap<FString, int32>& IntFields);
    
    UFUNCTION(BlueprintCallable)
    void SubmitInt(const ETelemetryEvent EventID, const FString& IntKey, const int32& IntData);
    
    UFUNCTION(BlueprintCallable)
    void SetStateString(ETelemetryState StateId, const FString& StringData);
    
    UFUNCTION(BlueprintCallable)
    void SetStateInt(ETelemetryState StateId, const int32& IntData);
    
    UFUNCTION(BlueprintCallable)
    void SetStateFloat(ETelemetryState StateId, const float& FloatData);
    
    UFUNCTION(BlueprintCallable)
    void NotifyGameWorldStop(AGGGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void NotifyGameWorldStart(FGuid WorldId, AGGGameState* GameState);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleQuestUpdated(AGGQuestBase* Quest, FGameplayTag UpdateTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleLobbyLeft();
    
    UFUNCTION(BlueprintCallable)
    void HandleLobbyJoined(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HandleLobbyCreated(bool bSuccess);
    
};

