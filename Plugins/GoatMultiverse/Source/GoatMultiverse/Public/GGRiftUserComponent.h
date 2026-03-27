#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGTeleportAreaUser.h"
#include "GGRiftUserComponent.generated.h"

class AGGPlayerController;
class AGGRiftTransitionEffect;
class UGGRiftUserComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOATMULTIVERSE_API UGGRiftUserComponent : public UGGTeleportAreaUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TransitionLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGRiftTransitionEffect* CurrentTransition;
    
public:
    UGGRiftUserComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGRiftUserComponent* GetRiftUserComponent(const AGGPlayerController* Player);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAbortRiftTransition();
    
};

