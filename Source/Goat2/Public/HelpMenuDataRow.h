#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HelpMenuDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FHelpMenuDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HelpEntryTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HelpEntryBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MobileHelpEntryBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> HelpEntryTexture;
    
    GOAT2_API FHelpMenuDataRow();
};

