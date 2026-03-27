#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "GGLevelScriptActor.generated.h"

class APawn;

UCLASS(Blueprintable)
class GOAT2_API AGGLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasInitLoadingScreen;
    
    AGGLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TeleportPawn(APawn* CalledFromPawn, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadingScreenTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitLoadingScreen_BP();
    
};

