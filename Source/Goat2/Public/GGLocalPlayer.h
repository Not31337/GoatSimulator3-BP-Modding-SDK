#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "GGAccessibilitySettings.h"
#include "GGControlsSettings.h"
#include "GGLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class GOAT2_API UGGLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGControlsSettings ControlsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGAccessibilitySettings AccessibilitySettings;
    
public:
    UGGLocalPlayer();

};

