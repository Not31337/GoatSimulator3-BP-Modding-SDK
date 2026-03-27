#pragma once
#include "CoreMinimal.h"
#include "GGGameUserSettingsSaveGame.h"
#include "GGPlayerInputMappings.h"
#include "GGInputBindingsSaveGame.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGInputBindingsSaveGame : public UGGGameUserSettingsSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGPlayerInputMappings> InputMappings;
    
    UGGInputBindingsSaveGame();

};

