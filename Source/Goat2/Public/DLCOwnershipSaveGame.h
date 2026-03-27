#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EGoatDLC.h"
#include "DLCOwnershipSaveGame.generated.h"

UCLASS(Blueprintable)
class UDLCOwnershipSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HardwareHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGoatDLC> OwnedDLCs;
    
    UDLCOwnershipSaveGame();

};

