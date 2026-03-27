#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGCurrencySpendActor.generated.h"

class UBillboardComponent;
class UGGCurrencySpendComponent;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API AGGCurrencySpendActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCurrencySpendComponent* SpendComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    AGGCurrencySpendActor(const FObjectInitializer& ObjectInitializer);

};

