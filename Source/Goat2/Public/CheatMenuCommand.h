#pragma once
#include "CoreMinimal.h"
#include "ECheatNativeParameterType.h"
#include "CheatMenuCommand.generated.h"

USTRUCT(BlueprintType)
struct FCheatMenuCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FuncName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECheatNativeParameterType Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParameterDefaultValueString;
    
    GOAT2_API FCheatMenuCommand();
};

