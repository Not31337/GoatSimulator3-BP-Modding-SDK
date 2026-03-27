#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GGOwnershipSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class GOAT2_API UGGOwnershipSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EOSCatalogItemIDs;
    
    UGGOwnershipSettings();

};

