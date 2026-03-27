#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EGearSlot.h"
#include "GGGearSlotDefinition.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGGearSlotDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGearSlot SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UGGGearSlotDefinition();

};

