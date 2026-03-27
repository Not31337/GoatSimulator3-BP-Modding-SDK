#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGEventPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGEventPointComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventAreaRadius;
    
public:
    UGGEventPointComponent(const FObjectInitializer& ObjectInitializer);

};

