#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GGNPCNameDataAsset.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGNPCNameDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MasculineFirstNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> FeminineFirstNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> LastNames;
    
    UGGNPCNameDataAsset();

};

