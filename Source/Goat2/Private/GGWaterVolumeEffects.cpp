#include "GGWaterVolumeEffects.h"

UGGWaterVolumeEffects::UGGWaterVolumeEffects() {
    this->FluidFriction = 1.00f;
    this->SplashDelay = 0.50f;
    this->MinimumVelocityIn = 200.00f;
    this->MinimumVelocityOut = 200.00f;
    this->EnterSplashSoundEffect = NULL;
    this->ExitSplashSoundEffect = NULL;
    this->EnterSplashParticleSys = NULL;
    this->EnterSplashFollowActor = false;
    this->ExitSplashParticleSys = NULL;
    this->ExitSplashFollowActor = false;
    this->FloatingSoundEffect = NULL;
    this->FloatingParticleSys = NULL;
    this->FloatingMovingParticleSys = NULL;
    this->FloatingMovingFastParticleSys = NULL;
    this->MinMovingFloatingVelocity = 200.00f;
    this->MinMovingFastFloatingVelocity = 600.00f;
    this->RectangularWaterPlane = NULL;
    this->CircularWaterPlane = NULL;
    this->WaterMaterial = NULL;
    this->SecondWaterMaterial = NULL;
    this->BilboardTexture = NULL;
}


