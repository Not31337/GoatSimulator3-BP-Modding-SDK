#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGDestructibleInfo.h"
#include "ImpulseDamageEvent.h"
#include "GGDestructibleStatics.generated.h"

class AActor;
class UGGDestructibleInfoObject;
class UInstancedStaticMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API UGGDestructibleStatics : public UObject {
    GENERATED_BODY()
public:
    UGGDestructibleStatics();

    UFUNCTION(BlueprintCallable)
    static void SpawnDestructibleEffects(AActor* ActorBeingDestroyed, UStaticMesh* StaticMesh, FTransform DestructibleTransform, FBoxSphereBounds DestructibleBounds, FGGDestructibleInfo DestructibleInfo, FVector Impulse);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyInstancedDestructible(AActor* ActorBeingDestroyed, UInstancedStaticMeshComponent* InstancedMeshComponent, FGGDestructibleInfo DestructibleInfo, FVector Impulse, int32 InstanceIndex, bool bDestroyActor);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyDestructible(AActor* ActorBeingDestroyed, UStaticMeshComponent* MeshComponent, FGGDestructibleInfo DestructibleInfo, FVector Impulse, bool bDestroyActor);
    
    UFUNCTION(BlueprintCallable)
    static UGGDestructibleInfoObject* CreateDestructibleInfoObject(FGGDestructibleInfo DestructibleInfo, bool bLoadMeshes);
    
    UFUNCTION(BlueprintCallable)
    static bool CanBreakByImpact(FVector Impulse, FGGDestructibleInfo DestructibleInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool CanBreakByDamage(float DamageAmount, FGGDestructibleInfo DestructibleInfo, FImpulseDamageEvent ImpulseDamageEvent, UObject* ObjectContext);
    
};

