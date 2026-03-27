#pragma once
#include "CoreMinimal.h"
#include "GGGameSettingHandle.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGGameSettingHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalPlayerID;
    
    FGGGameSettingHandle();
};
FORCEINLINE uint32 GetTypeHash(const FGGGameSettingHandle) { return 0; }

