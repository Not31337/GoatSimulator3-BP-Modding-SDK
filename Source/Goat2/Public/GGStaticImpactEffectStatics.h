#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GGStaticImpactEffectStatics.generated.h"

class AStaticMeshActor;
class UGGStaticImpactAssetUserData;
class UStaticMesh;

UCLASS(Blueprintable)
class GOAT2_API UGGStaticImpactEffectStatics : public UObject {
    GENERATED_BODY()
public:
    UGGStaticImpactEffectStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PlayImpactEffect_UserData(const UObject* WorldContextObject, UGGStaticImpactAssetUserData* UserData, FGameplayTag SourceTag, FVector Location, FRotator Rotation, float Volume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PlayImpactEffect_MeshActor(const UObject* WorldContextObject, AStaticMeshActor* MeshActor, FGameplayTag SourceTag, FVector Location, FRotator Rotation, float Volume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PlayImpactEffect_Mesh(const UObject* WorldContextObject, UStaticMesh* Mesh, FGameplayTag SourceTag, FVector Location, FRotator Rotation, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static bool IsThisValidSource_MeshActor(AStaticMeshActor* MeshActor, FGameplayTag SourceTag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsThisValidSource_Mesh(UStaticMesh* Mesh, FGameplayTag SourceTag);
    
    UFUNCTION(BlueprintCallable)
    static bool HasUserData_MeshActor(AStaticMeshActor* MeshActor);
    
    UFUNCTION(BlueprintCallable)
    static bool HasUserData_Mesh(UStaticMesh* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static UGGStaticImpactAssetUserData* GetImpactEffectUserData_MeshActor(AStaticMeshActor* MeshActor);
    
    UFUNCTION(BlueprintCallable)
    static UGGStaticImpactAssetUserData* GetImpactEffectUserData_Mesh(UStaticMesh* Mesh);
    
};

