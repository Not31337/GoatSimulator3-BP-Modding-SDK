#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PerPlatformProperties.h"
#include "PerPlatformProperties.h"
#include "PerPlatformProperties.h"
#include "GGPerPlatformProperties.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGPerPlatformProperties : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGPerPlatformProperties();

    UFUNCTION()
    static int32 Get_PerPlatformInt(const FPerPlatformInt& Value);
    
    UFUNCTION()
    static float Get_PerPlatformFloat(const FPerPlatformFloat& Value);
    
    UFUNCTION()
    static bool Get_PerPlatformBool(const FPerPlatformBool& Value);
    
};

