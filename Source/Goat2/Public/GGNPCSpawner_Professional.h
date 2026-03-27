#pragma once
#include "CoreMinimal.h"
#include "GGNPCSpawner.h"
#include "WeightedElement_Professional.h"
#include "GGNPCSpawner_Professional.generated.h"

class AGGNPC;

UCLASS(Blueprintable)
class GOAT2_API AGGNPCSpawner_Professional : public AGGNPCSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_Professional> ProfessionalNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseProfessionalSpawnPool;
    
    AGGNPCSpawner_Professional(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AGGNPC* SpawnNPCElement(FWeightedElement_Professional Element);
    
};

