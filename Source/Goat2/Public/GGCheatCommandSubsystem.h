#pragma once
#include "CoreMinimal.h"
#include "CheatMenuDataEntry.h"
#include "GGGameInstanceSubsystem.h"
#include "GGCheatCommandSubsystem.generated.h"

class UGGNotificationTestingStatics;

UCLASS(Blueprintable)
class GOAT2_API UGGCheatCommandSubsystem : public UGGGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> BoundClassObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheatMenuDataEntry> CheatEntries;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGNotificationTestingStatics* NotificationTestingStatics;
    
public:
    UGGCheatCommandSubsystem();

};

