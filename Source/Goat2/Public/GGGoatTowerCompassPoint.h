#pragma once
#include "CoreMinimal.h"
#include "GGCompassPointUserWidget.h"
#include "GGGoatTowerCompassPoint.generated.h"

class AGGGoatTower;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGGoatTowerCompassPoint : public UGGCompassPointUserWidget {
    GENERATED_BODY()
public:
    UGGGoatTowerCompassPoint();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePrimaryTowerStatus(AGGGoatTower* InGoatTower);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPrimaryTower();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsGoatTowerEventIncomplete();
    
};

