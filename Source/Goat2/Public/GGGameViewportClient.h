#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "OnKeyInputDelegate.h"
#include "OnSageDockModeChangedDelegate.h"
#include "GGGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyInput OnKeyInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSageDockModeChanged OnSageDockedModeChange;
    
    UGGGameViewportClient();

private:
    UFUNCTION(BlueprintCallable)
    void OnSageGraphicsScaleModeChanged(int32 ScaleMode);
    
    UFUNCTION(BlueprintCallable)
    void OnSageDockModeChanged(bool bIsDocked);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnConsoleActivationStateChanged(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void DetectSageDeviceProfile();
    
};

