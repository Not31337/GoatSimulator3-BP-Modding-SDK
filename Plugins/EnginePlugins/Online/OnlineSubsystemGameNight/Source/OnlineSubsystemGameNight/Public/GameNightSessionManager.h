#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnPlayerCancelDelegate.h"
#include "GameNightSessionManager.generated.h"

UCLASS(Blueprintable)
class ONLINESUBSYSTEMGAMENIGHT_API UGameNightSessionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCancel OnPlayerCancel;
    
    UGameNightSessionManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSessionURL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSessionConnectURL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSessionCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPlayerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsVIPSlot(int32 PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerTimeoutTime() const;
    
};

