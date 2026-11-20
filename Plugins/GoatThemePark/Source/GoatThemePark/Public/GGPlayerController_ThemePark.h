#pragma once
#include "CoreMinimal.h"
#include "GGGoatPlayerController.h"
#include "GGPlayerController_ThemePark.generated.h"

class UGGCustomCheatManager_ThemePark;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API AGGPlayerController_ThemePark : public AGGGoatPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCustomCheatManager_ThemePark* CustomCheatManager_ThemePark;
    
public:
    AGGPlayerController_ThemePark(const FObjectInitializer& ObjectInitializer);

};

