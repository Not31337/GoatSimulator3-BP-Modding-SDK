#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ENoticeBehaviour.h"
#include "GGStolenActor.h"
#include "UBTService_GGDefendArea.generated.h"

class AActor;
class AGGAIController_Humanoid;
class AGGGoat;
class AGGMissingActor;
class UBlackboardComponent;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API UUBTService_GGDefendArea : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENoticeBehaviour NoticeBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurroundingAreaDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseEnoughDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChaseDistanceFromGuardedArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoticeChangesWhenAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LostObjectKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CorrectLocationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetGoatKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ProtectedPActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGStolenActor> StolenActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGMissingActor*> MissingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGAIController_Humanoid* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComponent;
    
public:
    UUBTService_GGDefendArea();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStolenActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnProtectedActorLicked(AActor* LickedActor, AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable)
    void OnProtectedActorHeadbutted(UObject* HeadbuttedObject, AGGGoat* HeadbuttingGoat);
    
};

