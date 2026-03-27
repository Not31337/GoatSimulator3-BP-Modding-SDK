#include "GGStaticImpactEffectStatics.h"

UGGStaticImpactEffectStatics::UGGStaticImpactEffectStatics() {
}

bool UGGStaticImpactEffectStatics::PlayImpactEffect_UserData(const UObject* WorldContextObject, UGGStaticImpactAssetUserData* UserData, FGameplayTag SourceTag, FVector Location, FRotator Rotation, float Volume) {
    return false;
}

bool UGGStaticImpactEffectStatics::PlayImpactEffect_MeshActor(const UObject* WorldContextObject, AStaticMeshActor* MeshActor, FGameplayTag SourceTag, FVector Location, FRotator Rotation, float Volume) {
    return false;
}

bool UGGStaticImpactEffectStatics::PlayImpactEffect_Mesh(const UObject* WorldContextObject, UStaticMesh* Mesh, FGameplayTag SourceTag, FVector Location, FRotator Rotation, float Volume) {
    return false;
}

bool UGGStaticImpactEffectStatics::IsThisValidSource_MeshActor(AStaticMeshActor* MeshActor, FGameplayTag SourceTag) {
    return false;
}

bool UGGStaticImpactEffectStatics::IsThisValidSource_Mesh(UStaticMesh* Mesh, FGameplayTag SourceTag) {
    return false;
}

bool UGGStaticImpactEffectStatics::HasUserData_MeshActor(AStaticMeshActor* MeshActor) {
    return false;
}

bool UGGStaticImpactEffectStatics::HasUserData_Mesh(UStaticMesh* Mesh) {
    return false;
}

UGGStaticImpactAssetUserData* UGGStaticImpactEffectStatics::GetImpactEffectUserData_MeshActor(AStaticMeshActor* MeshActor) {
    return NULL;
}

UGGStaticImpactAssetUserData* UGGStaticImpactEffectStatics::GetImpactEffectUserData_Mesh(UStaticMesh* Mesh) {
    return NULL;
}


