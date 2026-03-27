#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GGStaticLibrary.generated.h"

class AActor;
class APlayerController;

UCLASS(Blueprintable)
class GOAT2_API UGGStaticLibrary : public UObject {
    GENERATED_BODY()
public:
    UGGStaticLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetFocusedSplitscreenPlayerIndex(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText RemoveTextFormatting(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText RemoveLinebreaks(const FText& InText, bool bReplaceWithSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNetPlayerIndex(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetFocusedSplitscreenPlayerIndex(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetActorsMass(const AActor* InActor, bool bGetPhysicsAssetsMass);
    
};

