#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Templates/SubclassOf.h"
#include "GGRideSeatSpawner.generated.h"

class AGGRideSeat;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATTHEMEPARK_API UGGRideSeatSpawner : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGRideSeat> SeatClass;
    
    UGGRideSeatSpawner(const FObjectInitializer& ObjectInitializer);

};

