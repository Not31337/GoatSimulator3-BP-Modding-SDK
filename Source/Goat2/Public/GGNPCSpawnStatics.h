#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "AnimalMaterialCollection.h"
#include "EGender.h"
#include "NPCSpawnParameters.h"
#include "Templates/SubclassOf.h"
#include "VehicleSpawnParameters.h"
#include "GGNPCSpawnStatics.generated.h"

class AGGNPC;
class AGGNPC_Animal;
class AGGVehicle;

UCLASS(Blueprintable)
class GOAT2_API UGGNPCSpawnStatics : public UObject {
    GENERATED_BODY()
public:
    UGGNPCSpawnStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGVehicle* SpawnVehicle(const UObject* WorldContextObject, TSubclassOf<AGGVehicle> InVehicleClass, FVehicleSpawnParameters SpawnParams);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGNPC* SpawnSpecial(const UObject* WorldContextObject, TSubclassOf<AGGNPC> NPCClass, FNPCSpawnParameters SpawnParameters);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGVehicle* SpawnRandomVehicle(const UObject* WorldContextObject, TArray<TSubclassOf<AGGVehicle>> ValidVehicleClasses, FVehicleSpawnParameters SpawnParams);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGNPC* SpawnProfessional(const UObject* WorldContextObject, TSubclassOf<AGGNPC> NPCClass, FNPCSpawnParameters SpawnParameters);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGNPC_Animal* SpawnDummyAnimal(const UObject* WorldContextObject, TSubclassOf<AGGNPC_Animal> NPCClass, FNPCSpawnParameters SpawnParameters, TArray<FAnimalMaterialCollection> MaterialOverrides);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGNPC* SpawnDummy(const UObject* WorldContextObject, TSubclassOf<AGGNPC> DummyClass, FNPCSpawnParameters SpawnParameters, bool bGenerateAppearance, EGender GenerateWithGender, FGameplayTag AppearanceArea, const FString& AppearanceSet, TArray<FString> NPCAppearanceOverride, TArray<FString> PredeterminedElements);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGNPC* SpawnCivilian(const UObject* WorldContextObject, FNPCSpawnParameters SpawnParameters, EGender Gender, FGameplayTag AppearanceArea, const FString& AppearanceSet, TArray<FString> NPCAppearanceOverride, TArray<FString> PredeterminedElements);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGNPC_Animal* SpawnAnimal(const UObject* WorldContextObject, TSubclassOf<AGGNPC_Animal> NPCClass, FNPCSpawnParameters SpawnParameters, TArray<FAnimalMaterialCollection> MaterialOverrides);
    
};

