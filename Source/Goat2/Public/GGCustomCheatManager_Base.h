#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGCustomCheatManager_Base.generated.h"

class AGGPlayerController;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, Config=GoatCheats, Within=GGPlayerController, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGCustomCheatManager_Base : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGPlayerController* OwningController;
    
public:
    UGGCustomCheatManager_Base(const FObjectInitializer& ObjectInitializer);

};

