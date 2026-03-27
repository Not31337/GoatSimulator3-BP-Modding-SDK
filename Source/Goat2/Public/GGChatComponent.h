#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGChatComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGChatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGGChatComponent(const FObjectInitializer& ObjectInitializer);

};

