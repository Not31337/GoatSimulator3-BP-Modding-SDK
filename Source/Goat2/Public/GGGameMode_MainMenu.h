#pragma once
#include "CoreMinimal.h"
#include "GGGameMode_Base.h"
#include "GGGameMode_MainMenu.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class GOAT2_API AGGGameMode_MainMenu : public AGGGameMode_Base {
    GENERATED_BODY()
public:
    AGGGameMode_MainMenu(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void Say(AActor* Sender, const FString& Msg);
    
};

