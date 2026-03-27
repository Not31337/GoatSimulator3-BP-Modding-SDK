#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GGDistanceTextWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGDistanceTextWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DistanceText;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentDistanceString;
    
public:
    UGGDistanceTextWidget();

    UFUNCTION(BlueprintCallable)
    void SetDistanceString(const FString& inString);
    
};

