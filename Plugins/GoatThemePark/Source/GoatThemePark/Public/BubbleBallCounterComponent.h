#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BubbleBallCounterComponent.generated.h"

class AGGPhysicsActor_BubbleBall;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UBubbleBallCounterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPhysicsActor_BubbleBall*> BubbleBalls;
    
public:
    UBubbleBallCounterComponent(const FObjectInitializer& ObjectInitializer);

};

