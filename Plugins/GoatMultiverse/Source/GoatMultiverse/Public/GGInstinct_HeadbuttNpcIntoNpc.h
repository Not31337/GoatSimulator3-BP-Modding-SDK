#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GGInstinct.h"
#include "RagdollStateChangeSettings.h"
#include "GGInstinct_HeadbuttNpcIntoNpc.generated.h"

class AActor;
class ACharacter;
class AGGGoat;
class AGGNPC;
class ULSCharacterMovementComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API AGGInstinct_HeadbuttNpcIntoNpc : public AGGInstinct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AGGNPC*, AGGGoat*> HeadbuttNPCs;
    
public:
    AGGInstinct_HeadbuttNpcIntoNpc(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHeadbuttedNPCUnRagdoll(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* UnRagdolledCharacter, const FRagdollStateChangeSettings& StateChangeSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnHeadbuttedNpcHitSomething(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnGoatHeadbuttingActor(AGGGoat* Goat, AActor* Actor);
    
};

