#include "GGNPCSpawnStatics.h"
#include "Templates/SubclassOf.h"

UGGNPCSpawnStatics::UGGNPCSpawnStatics() {
}

AGGVehicle* UGGNPCSpawnStatics::SpawnVehicle(const UObject* WorldContextObject, TSubclassOf<AGGVehicle> InVehicleClass, FVehicleSpawnParameters SpawnParams) {
    return NULL;
}

AGGNPC* UGGNPCSpawnStatics::SpawnSpecial(const UObject* WorldContextObject, TSubclassOf<AGGNPC> NPCClass, FNPCSpawnParameters SpawnParameters) {
    return NULL;
}

AGGVehicle* UGGNPCSpawnStatics::SpawnRandomVehicle(const UObject* WorldContextObject, TArray<TSubclassOf<AGGVehicle>> ValidVehicleClasses, FVehicleSpawnParameters SpawnParams) {
    return NULL;
}

AGGNPC* UGGNPCSpawnStatics::SpawnProfessional(const UObject* WorldContextObject, TSubclassOf<AGGNPC> NPCClass, FNPCSpawnParameters SpawnParameters) {
    return NULL;
}

AGGNPC_Animal* UGGNPCSpawnStatics::SpawnDummyAnimal(const UObject* WorldContextObject, TSubclassOf<AGGNPC_Animal> NPCClass, FNPCSpawnParameters SpawnParameters, TArray<FAnimalMaterialCollection> MaterialOverrides) {
    return NULL;
}

AGGNPC* UGGNPCSpawnStatics::SpawnDummy(const UObject* WorldContextObject, TSubclassOf<AGGNPC> DummyClass, FNPCSpawnParameters SpawnParameters, bool bGenerateAppearance, EGender GenerateWithGender, FGameplayTag AppearanceArea, const FString& AppearanceSet, TArray<FString> NPCAppearanceOverride, TArray<FString> PredeterminedElements) {
    return NULL;
}

AGGNPC* UGGNPCSpawnStatics::SpawnCivilian(const UObject* WorldContextObject, FNPCSpawnParameters SpawnParameters, EGender Gender, FGameplayTag AppearanceArea, const FString& AppearanceSet, TArray<FString> NPCAppearanceOverride, TArray<FString> PredeterminedElements) {
    return NULL;
}

AGGNPC_Animal* UGGNPCSpawnStatics::SpawnAnimal(const UObject* WorldContextObject, TSubclassOf<AGGNPC_Animal> NPCClass, FNPCSpawnParameters SpawnParameters, TArray<FAnimalMaterialCollection> MaterialOverrides) {
    return NULL;
}


