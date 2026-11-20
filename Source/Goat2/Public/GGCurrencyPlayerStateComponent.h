#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GGCurrencyPlayerStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGCurrencyPlayerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGGCurrencyPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnCurrency(int32 Amount, FVector SpawnLocation, bool bIsImportant);
    
};

