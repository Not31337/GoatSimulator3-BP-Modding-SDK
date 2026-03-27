#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CheatMenuCommandRow.generated.h"

USTRUCT(BlueprintType)
struct FCheatMenuCommandRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassObject;
    
    GOAT2_API FCheatMenuCommandRow();
};

