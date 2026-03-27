#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGCheatMenuTeleportActor.generated.h"

class UArrowComponent;
class UBillboardComponent;
class UGGCheatMenuTeleportComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGCheatMenuTeleportActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCheatMenuTeleportComponent* TeleportComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    AGGCheatMenuTeleportActor(const FObjectInitializer& ObjectInitializer);

};

