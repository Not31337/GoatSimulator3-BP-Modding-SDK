#pragma once
#include "CoreMinimal.h"
#include "SignificanceManager.h"
#include "GGQueuedSignificanceEntry.h"
#include "GGSignificanceManager.generated.h"

class AGGPhysicsActor;

UCLASS(Blueprintable)
class GOAT2_API UGGSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPhysicsActor*> PActorsLoadingResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenInitialized;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGQueuedSignificanceEntry> QueuedSignificanceRegistrars;
    
public:
    UGGSignificanceManager();

    UFUNCTION(BlueprintCallable)
    void SetTickFunctionEnabled(bool bInEnabled);
    
};

