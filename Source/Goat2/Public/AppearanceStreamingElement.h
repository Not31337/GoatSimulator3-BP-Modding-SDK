#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AppearanceStreamingElement.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FAppearanceStreamingElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> ItemsToStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AlreadyLoadedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AppearanceStringsToStream;
    
    GOAT2_API FAppearanceStreamingElement();
};

