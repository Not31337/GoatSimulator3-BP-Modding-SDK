#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GGSpawnTransform.h"
#include "GGSplineToolFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGSplineToolFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGSplineToolFunctionLibrary();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void TranslateBy(FGGSpawnTransform& InTransform, const FVector& Translation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBoxSphereBounds GetBounds(const FGGSpawnTransform& InTransform);
    
};

