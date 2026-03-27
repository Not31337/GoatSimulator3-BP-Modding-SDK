#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HelpMenuDataRow.h"
#include "GGHelpEntryObject.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGHelpEntryObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelpMenuDataRow HelpMenuDataRow;
    
    UGGHelpEntryObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEntryBody() const;
    
};

