#pragma once
#include "CoreMinimal.h"
#include "GGSynchronizeActionUserWidget.h"
#include "GGSynchronizeActionUserWidget_MV.generated.h"

class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class GOATMULTIVERSE_API UGGSynchronizeActionUserWidget_MV : public UGGSynchronizeActionUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InstabilityOverlay;
    
    UGGSynchronizeActionUserWidget_MV();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleRiftVisuals(bool IsRift);
    
};

