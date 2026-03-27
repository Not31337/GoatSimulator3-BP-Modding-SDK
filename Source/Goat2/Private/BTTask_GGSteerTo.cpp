#include "BTTask_GGSteerTo.h"

UBTTask_GGSteerTo::UBTTask_GGSteerTo() {
    this->NodeName = TEXT("Steer To");
    this->YawAcceptanceRadius = 5.00f;
    this->YawSlowTurnRadius = 15.00f;
    this->SlowTurnMultiplier = 0.25f;
    this->MinDistanceToBack = 2500.00f;
    this->LastNodeStopDistance = 300.00f;
    this->CanUseCarHorn = true;
    this->HornCD = 5.00f;
    this->HornChance = 50;
    this->TimeUntilInvertedInput = 1.00f;
    this->InvertedInputDuration = 4.00f;
    this->bStopForCharacters = true;
    this->bStopForVehicles = true;
    this->bCanEverReachLastPoint = true;
    this->bCanDoSlowTurning = true;
    this->bBackWhenTargetBehind = true;
    this->FeelerTraceMultiplier = 20.00f;
    this->FeelerTraceMin = 80.00f;
    this->MiddleFeelerCheckInterval = 0.25f;
    this->MiddleFeelerTraceMin = 250.00f;
    this->MiddleFeelerTraceMax = 600.00f;
    this->MiddleFeelerTraceMultiplier = 20.00f;
    this->MiddleFeelerTraceTurnAdjust = 45.00f;
    this->TimeUntilRunOverNPC = 15.00f;
    this->StopCaringFor = 6.00f;
    this->Vehicle = NULL;
}


