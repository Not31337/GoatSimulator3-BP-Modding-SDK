#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RecentActor.h"
#include "GGSeatSubsystem.generated.h"

UCLASS(Blueprintable)
class GOATTHEMEPARK_API UGGSeatSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentActor> ActorsLeftASeat;
    
    UGGSeatSubsystem();

};

