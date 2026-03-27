#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "WorldCollection.h"
#include "GGWorldCollectionsSave.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UGGWorldCollectionsSave : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedWorldCollectionSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldCollection> WorldCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastWorldCollectionSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MobileLastWorldCollectionSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MobileLastLevelDataLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastLevelDataLoaded;
    
public:
    UGGWorldCollectionsSave();

};

