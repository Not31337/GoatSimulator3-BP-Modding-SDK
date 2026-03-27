#include "GGGoatKartBlueprintFunctionLibrary.h"

UGGGoatKartBlueprintFunctionLibrary::UGGGoatKartBlueprintFunctionLibrary() {
}

TArray<AGGRoadPathSpline*> UGGGoatKartBlueprintFunctionLibrary::FindRoadsOnMap(const UObject* WorldRef) {
    return TArray<AGGRoadPathSpline*>();
}

void UGGGoatKartBlueprintFunctionLibrary::DebugSpline(const USplineComponent* Spline, float Duration, float LineStepSize, float LineSize, const FLinearColor& PointColor, const FLinearColor& LineColor) {
}

void UGGGoatKartBlueprintFunctionLibrary::DebugCheckpointsDuringRace(const AActor* RaceTrack, const AGGPlayerGame_Base* PlayerGame) {
}


