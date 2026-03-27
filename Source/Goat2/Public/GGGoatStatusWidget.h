#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Blueprint/UserWidget.h"
#include "GGGoatStatusWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGGoatStatusWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrimaryGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UniqueNetId;
    
    UGGGoatStatusWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWidget();
    
};

