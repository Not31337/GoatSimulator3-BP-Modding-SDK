#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "GGChatBeaconClient.generated.h"

class UGGOnlineManager;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API AGGChatBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 GivenColorIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGOnlineManager* OnlineManager;
    
public:
    AGGChatBeaconClient(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendMessage(const FString& UserName, const FString& Message, int32 ColorIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendMessage(const FString& UserName, const FString& Message, int32 ColorIndex);
    
};

