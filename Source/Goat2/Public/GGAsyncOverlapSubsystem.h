#pragma once
#include "CoreMinimal.h"
#include "AsyncDispatcherTickFunction.h"
#include "GGWorldSubsystem.h"
#include "PendingOverlapUpdate.h"
#include "GGAsyncOverlapSubsystem.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGAsyncOverlapSubsystem : public UGGWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncDispatcherTickFunction AsyncDispatcherTickFunction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPendingOverlapUpdate> ScheduledUpdates;
    
public:
    UGGAsyncOverlapSubsystem();

    UFUNCTION(BlueprintCallable)
    static void RegisterComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void DeregisterComponent(USceneComponent* Component);
    
};

