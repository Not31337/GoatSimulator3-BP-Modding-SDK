#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameNightQRCodeGenerator.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMGAMENIGHT_API UGameNightQRCodeGenerator : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameNightQRCodeGenerator();

    UFUNCTION(BlueprintCallable)
    static UTexture2D* GenerateQRCodeFromURL(const FString& URL);
    
};

