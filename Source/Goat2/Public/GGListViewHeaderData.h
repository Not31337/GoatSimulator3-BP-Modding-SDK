#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GGListElementSortingInterface.h"
#include "GGListViewHeaderData.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGListViewHeaderData : public UObject, public IGGListElementSortingInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HeaderTag;
    
    UGGListViewHeaderData();


    // Fix for true pure virtual functions not being implemented
};

