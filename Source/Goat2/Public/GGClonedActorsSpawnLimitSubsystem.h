#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GGClonedActorsSpawnLimitSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class GOAT2_API UGGClonedActorsSpawnLimitSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Clones;
    
    UGGClonedActorsSpawnLimitSubsystem();

    UFUNCTION(BlueprintCallable)
    void OnCloneDestroyed(AActor* Clone);
    
    UFUNCTION(BlueprintCallable)
    static void EnforceCloneLimit(AActor* NewClone, AActor* ActorToClone);
    
};

