#pragma once
#include "CoreMinimal.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_Slingshot.generated.h"

class AGGSlingshot;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API UGGGearAbility_Slingshot : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGSlingshot> SlingshotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGSlingshot* SpawnedSlingshot;
    
public:
    UGGGearAbility_Slingshot();

};

