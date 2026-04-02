#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GGBlueprintMath.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGBlueprintMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGBlueprintMath();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClampVectorComponents(FVector InVector, float Min, float Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator CalculateSurfaceRotation(FVector SurfaceNormal, float Yaw);
    
};

