#pragma once
#include "CoreMinimal.h"
#include "GGMobileControlsLayoutBase.h"
#include "GGMobileControlsLayoutMedusa.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class GOATMULTIVERSE_API UGGMobileControlsLayoutMedusa : public UGGMobileControlsLayoutBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* TurnMedusaButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* BackButton;
    
    UGGMobileControlsLayoutMedusa();

private:
    UFUNCTION(BlueprintCallable)
    void TurnMedusaButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void BackButtonPressed();
    
};

