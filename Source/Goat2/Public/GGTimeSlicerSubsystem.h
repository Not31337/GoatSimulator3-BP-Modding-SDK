#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ECallMode.h"
#include "TimeSlicerDynamicDelegateDelegate.h"
#include "GGTimeSlicerSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGTimeSlicerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UGGTimeSlicerSubsystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_TryCallFunction(const UObject* WorldContextObject, FTimeSlicerDynamicDelegate Delegate, const FName& Name, ECallMode CallMode);
    
};

