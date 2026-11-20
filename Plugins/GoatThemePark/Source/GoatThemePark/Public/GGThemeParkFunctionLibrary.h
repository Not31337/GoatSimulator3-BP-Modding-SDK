#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GGThemeParkFunctionLibrary.generated.h"

class AGGNPC_Humanoid;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API UGGThemeParkFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGThemeParkFunctionLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void MakeNPCThrowUp(AGGNPC_Humanoid* NPC, bool bCanBypassCooldown);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void MakeNPCNauseous(AGGNPC_Humanoid* NPC, FVector MoveLocation, float TimeBeforeThrowUp, bool bCanBypassCooldown);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static bool IsNPCNauseousOrPuking(AGGNPC_Humanoid* NPC);
    
};

