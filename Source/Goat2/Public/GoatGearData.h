#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGearSlot.h"
#include "GoatGearData.generated.h"

USTRUCT(BlueprintType)
struct FGoatGearData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGearSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshLocModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshLocModifierPriority;
    
    GOAT2_API FGoatGearData();
};

