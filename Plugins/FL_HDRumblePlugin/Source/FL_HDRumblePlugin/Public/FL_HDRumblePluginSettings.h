#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "FL_HDRumblePluginSettings.generated.h"

class USoundSubmix;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UFL_HDRumblePluginSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundSubmix>> HDRumbleSubmixes;
    
    UFL_HDRumblePluginSettings();

};

