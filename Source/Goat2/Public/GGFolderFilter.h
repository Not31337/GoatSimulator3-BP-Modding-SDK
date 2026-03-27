#pragma once
#include "CoreMinimal.h"
#include "GGFolderFilter.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGFolderFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FolderToInclude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SubFoldersToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDefaultUnlocks;
    
    FGGFolderFilter();
};

