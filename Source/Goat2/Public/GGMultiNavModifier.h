#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGMultiNavModifier.generated.h"

class UBillboardComponent;
class USceneComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGMultiNavModifier : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    AGGMultiNavModifier(const FObjectInitializer& ObjectInitializer);

};

