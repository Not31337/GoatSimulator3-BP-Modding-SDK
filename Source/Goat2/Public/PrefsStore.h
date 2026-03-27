#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PrefsStore.generated.h"

UCLASS(Blueprintable, Config=Game)
class UPrefsStore : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> BoolMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> NumberMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> StringMap;
    
    UPrefsStore();

};

