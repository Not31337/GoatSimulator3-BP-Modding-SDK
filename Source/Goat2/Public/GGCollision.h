#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GGCollision.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UGGCollision : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGCollision();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FVector FindFreeLocationForCapsule_K2(const UObject* WorldContext, float HalfHeight, float Radius, TEnumAsByte<ECollisionChannel> CollisionChannel, FVector TargetLocation, FRotator TargetRotation, AActor* OptTestActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector FindFreeLocationForActor_K2(const AActor* TestActor, FVector TargetLocation, FRotator TargetRotation, FVector AtScale);
    
};

