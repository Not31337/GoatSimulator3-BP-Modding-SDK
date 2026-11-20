#pragma once
#include "CoreMinimal.h"
#include "GGRideTrackDestroyedSectionReplication.generated.h"

USTRUCT(BlueprintType)
struct GOATTHEMEPARK_API FGGRideTrackDestroyedSectionReplication {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRepaired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NpcAppearance;
    
    FGGRideTrackDestroyedSectionReplication();
};

