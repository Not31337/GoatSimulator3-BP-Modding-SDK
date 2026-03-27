#pragma once
#include "CoreMinimal.h"
#include "GGGoatPlayerController.h"
#include "GGPlayerController_Multiverse.generated.h"

class UGGCustomCheatManager_Multiverse;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGPlayerController_Multiverse : public AGGGoatPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCustomCheatManager_Multiverse* CustomCheatManager_Multiverse;
    
public:
    AGGPlayerController_Multiverse(const FObjectInitializer& ObjectInitializer);

};

