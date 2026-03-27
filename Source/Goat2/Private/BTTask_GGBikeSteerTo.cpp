#include "BTTask_GGBikeSteerTo.h"

UBTTask_GGBikeSteerTo::UBTTask_GGBikeSteerTo() {
    this->NodeName = TEXT("Bike Steer To");
    this->DebugPrint = false;
    this->YawAcceptanceRadius = 5.00f;
    this->YawSlowTurnRadius = 15.00f;
    this->SlowTurnMultiplier = 0.25f;
    this->MinDistanceToBack = 2500.00f;
    this->LastNodeStopDistance = 300.00f;
    this->TimeUntilInvertedInput = 1.00f;
    this->InvertedInputDuration = 3.50f;
    this->FeelerTraceMultiplier = 20.00f;
    this->FeelerTraceMin = 80.00f;
    this->FeelerBackTraceMultiplier = 20.00f;
    this->FeelerBackTraceMin = 80.00f;
    this->Vehicle = NULL;
}


