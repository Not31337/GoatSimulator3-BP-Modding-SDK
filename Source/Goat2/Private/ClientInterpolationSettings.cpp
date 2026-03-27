#include "ClientInterpolationSettings.h"

FClientInterpolationSettings::FClientInterpolationSettings() {
    this->LocationInterpolationSpeed = 0.00f;
    this->RotationInterpolationSpeed = 0.00f;
    this->LinearVelocityInterpolationSpeed = 0.00f;
    this->AngularVelocityInterpolationSpeed = 0.00f;
    this->LocationInterpolationTolerance = 0.00f;
    this->RotationInterpolationTolerance = 0.00f;
    this->LinearVelocityInterpolationTolerance = 0.00f;
    this->AngularVelocityInterpolationTolerance = 0.00f;
}

