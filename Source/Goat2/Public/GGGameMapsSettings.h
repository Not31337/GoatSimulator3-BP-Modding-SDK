#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameMapsSettings.h"
#include "GGGameMapsSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class GOAT2_API UGGGameMapsSettings : public UGameMapsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath OverrideMainMap;
    
    UGGGameMapsSettings();

};

