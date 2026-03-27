#pragma once
#include "CoreMinimal.h"
#include "GGListUserWidget.h"
#include "GGGoatTowerListUserWidget.generated.h"

class UListView;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGGoatTowerListUserWidget : public UGGListUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* List;
    
    UGGGoatTowerListUserWidget();

};

