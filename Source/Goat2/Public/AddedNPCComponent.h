#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AddedNPCComponent.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FAddedNPCComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> ComponentToAdd;
    
    GOAT2_API FAddedNPCComponent();
};

