#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGInstinctCategoryDataAsset.generated.h"

class AGGInstinct;

UCLASS(Blueprintable)
class GOAT2_API UGGInstinctCategoryDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryHeaderLabel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGInstinct*> InstinctsInCategory;
    
public:
    UGGInstinctCategoryDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted();
    
};

