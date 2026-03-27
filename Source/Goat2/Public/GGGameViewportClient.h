#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "OnKeyInputDelegate.h"
#include "GGGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyInput OnKeyInput;
    
    UGGGameViewportClient();

    UFUNCTION(BlueprintCallable)
    void OnConsoleActivationStateChanged(bool bActive);
    
};

