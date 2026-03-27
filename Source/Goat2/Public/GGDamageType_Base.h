#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "ETypeOfDamage.h"
#include "GGDamageType_Base.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGDamageType_Base : public UDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETypeOfDamage TypeOfDamage;
    
    UGGDamageType_Base();

};

