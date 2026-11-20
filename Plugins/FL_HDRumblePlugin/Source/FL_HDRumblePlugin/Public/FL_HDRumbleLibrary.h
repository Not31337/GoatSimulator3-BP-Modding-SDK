#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FL_HDRumbleLibrary.generated.h"

class AController;
class UAudioComponent;

UCLASS(Blueprintable)
class FL_HDRUMBLEPLUGIN_API UFL_HDRumbleLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFL_HDRumbleLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetHDRumbleSubmixSendMulti(TArray<AController*> RumbleControllers, UAudioComponent* TargetAudioComponent, float SendLevel);
    
    UFUNCTION(BlueprintCallable)
    static bool SetHDRumbleSubmixSendAll(UAudioComponent* TargetAudioComponent, float SendLevel);
    
    UFUNCTION(BlueprintCallable)
    static bool SetHDRumbleSubmixSend(AController* RumbleController, UAudioComponent* TargetAudioComponent, float SendLevel);
    
};

