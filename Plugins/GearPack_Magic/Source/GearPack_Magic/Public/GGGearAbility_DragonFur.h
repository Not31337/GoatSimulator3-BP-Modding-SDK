#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_DragonFur.generated.h"

class AGGDragonFurTornado;
class AGGGoat;

UCLASS(Blueprintable)
class GEARPACK_MAGIC_API UGGGearAbility_DragonFur : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGDragonFurTornado> DragonFurTornadoClass;
    
public:
    UGGGearAbility_DragonFur();

protected:
    UFUNCTION(BlueprintCallable)
    void OnGoatBaa(AGGGoat* GoatBaaing);
    
};

