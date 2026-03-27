#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "AudioFunctionLibrarySourceTableRow.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FAudioFunctionLibrarySourceTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    GOAT2_API FAudioFunctionLibrarySourceTableRow();
};

