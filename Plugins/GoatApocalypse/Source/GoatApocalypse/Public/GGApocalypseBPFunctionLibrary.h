#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GGApocalypseBPFunctionLibrary.generated.h"

class AGGGameState_Apocalypse;
class AGGVehicle_Motorcycle;
class UObject;
class UPrimitiveComponent;
class UTexture2D;

UCLASS(Blueprintable)
class GOATAPOCALYPSE_API UGGApocalypseBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGApocalypseBPFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGVehicle_Motorcycle* IsCompMotorcycle(UPrimitiveComponent* Comp, bool& IsMotorcycle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetCampUpgradeTextureFromGatherID(const UObject* WorldContextObject, const FString& inString, bool bUnframed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGGGameState_Apocalypse* GetApocalypseGameState(const UObject* WorldContextObject);
    
};

