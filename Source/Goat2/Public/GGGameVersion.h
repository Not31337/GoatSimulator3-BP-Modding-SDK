#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGameVersion.h"
#include "GGGameVersion.generated.h"

UCLASS(Blueprintable, Config=GameVersion)
class GOAT2_API UGGGameVersion : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildCL;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildDate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SentryEnvironment;
    
    UGGGameVersion();

    UFUNCTION(BlueprintCallable)
    static EGameVersion Get();
    
};

