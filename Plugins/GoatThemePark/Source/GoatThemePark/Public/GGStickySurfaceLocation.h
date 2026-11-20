#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GGStickySurfaceLocation.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct GOATTHEMEPARK_API FGGStickySurfaceLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SurfaceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachedActorBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 ImpactPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 ImpactNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 PActorRelativeLocation;
    
    FGGStickySurfaceLocation();
};

