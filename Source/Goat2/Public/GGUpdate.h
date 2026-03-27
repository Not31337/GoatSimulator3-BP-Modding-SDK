#pragma once
#include "CoreMinimal.h"
#include "EGGUpdate.h"
#include "GGUpdate.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGGUpdate EnumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlugin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameplayTagSource;
    
    FGGUpdate();
};

