#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "GGEventPointActor.generated.h"

class UGGEventPointComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGEventPointActor : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGEventPointComponent* EventPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiscoverQuestBroadcastRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionBroadcastRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearestQuestSearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressBroadcastRadius;
    
    AGGEventPointActor(const FObjectInitializer& ObjectInitializer);

};

