#pragma once
#include "CoreMinimal.h"
#include "GGPartyMemberGoat.generated.h"

class AGGGoat;
class UWidgetComponent;

USTRUCT(BlueprintType)
struct GOAT2_API FGGPartyMemberGoat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGGoat* Goat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* GoatStatusWidgetComponent;
    
    FGGPartyMemberGoat();
};

