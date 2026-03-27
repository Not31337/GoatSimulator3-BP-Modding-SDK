#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGPerformanceTracker.generated.h"

class UGGTelemetrySubsystem;

UCLASS(Blueprintable)
class GOAT2_API UGGPerformanceTracker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTelemetrySubsystem* TelemetrySubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastKnownGraphicsSettings;
    
public:
    UGGPerformanceTracker();

private:
    UFUNCTION(BlueprintCallable)
    void DispatchGraphicsSettingsState();
    
};

