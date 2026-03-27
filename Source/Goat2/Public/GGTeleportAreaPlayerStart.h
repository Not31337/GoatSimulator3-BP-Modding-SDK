#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "GGTeleportAreaPlayerStart.generated.h"

UCLASS(Abstract, Blueprintable)
class GOAT2_API AGGTeleportAreaPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMovingPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsedByCheckpoint;
    
    AGGTeleportAreaPlayerStart(const FObjectInitializer& ObjectInitializer);

};

