#pragma once
#include "CoreMinimal.h"
#include "GGGameSettingHandle.h"
#include "GGGameUserSettingsSaveGame.h"
#include "GGPreferencesSaveGame.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGPreferencesSaveGame : public UGGGameUserSettingsSaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGGGameSettingHandle, FString> Preferences;
    
public:
    UGGPreferencesSaveGame();

};

