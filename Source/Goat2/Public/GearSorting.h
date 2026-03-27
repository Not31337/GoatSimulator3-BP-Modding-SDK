#pragma once
#include "CoreMinimal.h"
#include "ECustomizationMode.h"
#include "GearSortingOption.h"
#include "GearSorting.generated.h"

USTRUCT(BlueprintType)
struct FGearSorting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomizationMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGearSortingOption> SortingOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    GOAT2_API FGearSorting();
};

