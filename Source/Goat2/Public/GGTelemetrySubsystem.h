#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ETelemetryEvent.h"
#include "ETelemetryState.h"
#include "GGTelemetrySubsystem.generated.h"

class AGGGameState;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGTelemetrySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSessionRunning;
    
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
    bool SubmitJSONObject(const ETelemetryEvent EventID, const UObject* JsonObject);
    
    UFUNCTION(BlueprintCallable)
    void SubmitInt(const ETelemetryEvent EventID, const FString& IntKey, const int32& IntData);
    
    UFUNCTION(BlueprintCallable)
    void SetStateString(ETelemetryState StateId, const FString& StringData);
    
    UFUNCTION(BlueprintCallable)
    bool SetStateJSONObject(ETelemetryState StateId, const UObject* JsonObject);
    
    UFUNCTION(BlueprintCallable)
    void SetStateInt(ETelemetryState StateId, const int32& IntData);
    
    UFUNCTION(BlueprintCallable)
    void NotifyGameWorldStop(AGGGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void NotifyGameWorldStart(FGuid WorldId, AGGGameState* GameState);
    
};

