#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GGGoatKartBlueprintFunctionLibrary.generated.h"

class AActor;
class AGGPlayerGame_Base;
class AGGRoadPathSpline;
class UObject;
class USplineComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGGoatKartBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGGoatKartBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AGGRoadPathSpline*> FindRoadsOnMap(const UObject* WorldRef);
    
    UFUNCTION(BlueprintCallable)
    static void DebugSpline(const USplineComponent* Spline, float Duration, float LineStepSize, float LineSize, const FLinearColor& PointColor, const FLinearColor& LineColor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void DebugCheckpointsDuringRace(const AActor* RaceTrack, const AGGPlayerGame_Base* PlayerGame);
    
};

