#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GGBossLevelMediaSoundListener.generated.h"

class UMediaSoundComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGBossLevelMediaSoundListener : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* MediaSoundComponent;
    
public:
    AGGBossLevelMediaSoundListener(const FObjectInitializer& ObjectInitializer);

};

