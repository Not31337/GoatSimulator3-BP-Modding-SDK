#pragma once
#include "CoreMinimal.h"
#include "RecentPrimComponent.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FRecentPrimComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdatedTimestamp;
    
    GOAT2_API FRecentPrimComponent();
};

