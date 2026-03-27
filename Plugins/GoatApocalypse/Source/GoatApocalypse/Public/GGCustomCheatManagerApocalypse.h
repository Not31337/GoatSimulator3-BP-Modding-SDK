#pragma once
#include "CoreMinimal.h"
#include "GGCustomCheatManager.h"
#include "GGCustomCheatManagerApocalypse.generated.h"

class UGGNotificationTestingStatics_AP;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATAPOCALYPSE_API UGGCustomCheatManagerApocalypse : public UGGCustomCheatManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNotificationTestingStatics_AP* NotificationTestingStatics_Apocalypse;
    
public:
    UGGCustomCheatManagerApocalypse(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockRadioTower(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllRadioTowers();
    
    UFUNCTION(BlueprintCallable, Exec)
    static void ToggleFormerGearsLocked(bool bUnlocked);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnCurrency(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowCactusCounterNotification();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideCactusCounterNotification();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyCactus();
    
};

