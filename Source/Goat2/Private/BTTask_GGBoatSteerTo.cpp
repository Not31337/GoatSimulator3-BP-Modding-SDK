#include "BTTask_GGBoatSteerTo.h"

UBTTask_GGBoatSteerTo::UBTTask_GGBoatSteerTo() {
    this->NodeName = TEXT("Boat Steer To");
    this->YawAcceptanceRadius = 5.00f;
    this->YawSlowTurnRadius = 15.00f;
    this->SlowTurnMultiplier = 0.25f;
    this->bCanGoBackwardsIfCloseEnough = false;
    this->MinDistanceToBack = 2500.00f;
    this->LastNodeStopDistance = 300.00f;
    this->TimeUntilInvertedInput = 1.00f;
    this->InvertedInputDuration = 4.00f;
    this->FeelerTraceMultiplier = 20.00f;
    this->FeelerTraceMin = 80.00f;
    this->MiddleFeelerCheckInterval = 0.25f;
    this->MiddleFeelerTraceMin = 250.00f;
    this->MiddleFeelerTraceMax = 600.00f;
    this->MiddleFeelerTraceMultiplier = 20.00f;
    this->MiddleFeelerTraceTurnAdjust = 45.00f;
    this->Vehicle = NULL;
}


