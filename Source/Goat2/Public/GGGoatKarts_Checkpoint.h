#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GGGoatKarts_Checkpoint.generated.h"

class UPrimitiveComponent;

UINTERFACE(Blueprintable)
class GOAT2_API UGGGoatKarts_Checkpoint : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGGoatKarts_Checkpoint : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetCheckpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocalPlayerCrossedCheckpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MarkAsNextCheckpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetOverlapComponent() const;
    
};

