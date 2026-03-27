#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGPlayerInviteWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGPlayerInviteWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
    UGGPlayerInviteWidget();

};

