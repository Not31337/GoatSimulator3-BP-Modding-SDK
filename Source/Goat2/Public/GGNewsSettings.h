#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "NewsOverrideData.h"
#include "NewsTabEntry.h"
#include "GGNewsSettings.generated.h"

UCLASS(Blueprintable, Config=GoatNews)
class GOAT2_API UGGNewsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewsTabEntry> NewsCarousel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewsTabEntry> NewsTabs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewsTabEntry> NewsPopups;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewsOverrideData> NewsOverride;
    
    UGGNewsSettings();

};

