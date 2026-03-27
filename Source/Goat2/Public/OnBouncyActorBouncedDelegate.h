#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnBouncyActorBouncedDelegate.generated.h"

class AActor;
class UGGBouncyStaticMeshComponent;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnBouncyActorBounced, UGGBouncyStaticMeshComponent*, BouncyMesh, AActor*, BouncedActor, UPrimitiveComponent*, BouncedComponent, FVector, BouncedVelocity);

