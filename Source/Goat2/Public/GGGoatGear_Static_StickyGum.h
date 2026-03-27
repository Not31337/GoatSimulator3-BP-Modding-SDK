#pragma once
#include "CoreMinimal.h"
#include "GGGoatGear_Static_Base.h"
#include "TraceEndPoint.h"
#include "GGGoatGear_Static_StickyGum.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_StickyGum : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UGGGoatGear_Static_StickyGum(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void StickyGumFiredMulticast(const TArray<FTraceEndPoint>& TraceEndPoints);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStickyGumFired(const TArray<FTraceEndPoint>& TraceEndPoints);
    
};

