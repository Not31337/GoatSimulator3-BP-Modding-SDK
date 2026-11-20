#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Scene_Feet.h"
#include "GGGoatGear_Scene_Feet_Slingshot.generated.h"

class AGGSlingshot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGGoatGear_Scene_Feet_Slingshot : public UGGGoatGear_Scene_Feet {
    GENERATED_BODY()
public:
    UGGGoatGear_Scene_Feet_Slingshot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCurrentSlingshot(AGGSlingshot* InUseSlingshot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSomeSlingshotInUse() const;
    
    UFUNCTION(BlueprintCallable)
    AGGSlingshot* GetCurrentSlingshot();
    
};

