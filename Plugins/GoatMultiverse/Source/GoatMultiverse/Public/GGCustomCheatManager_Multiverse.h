#pragma once
#include "CoreMinimal.h"
#include "GGCustomCheatManager_Base.h"
#include "GGCustomCheatManager_Multiverse.generated.h"

class UGGNotificationTestingStatics_MV;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGCustomCheatManager_Multiverse : public UGGCustomCheatManager_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNotificationTestingStatics_MV* NotificationTestingStatics_Multiverse;
    
public:
    UGGCustomCheatManager_Multiverse(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllMultiverseTestGoatGear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllMultiverseGoatGear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExitRift();
    
};

