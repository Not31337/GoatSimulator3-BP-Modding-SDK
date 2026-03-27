#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "IFFoliageDataTableRow.generated.h"

class AActor;
class UStaticMesh;

USTRUCT(BlueprintType)
struct INTERACTIVEFOLIAGESYSTEM_API FIFFoliageDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> InteractiveActorClass;
    
    FIFFoliageDataTableRow();
};

