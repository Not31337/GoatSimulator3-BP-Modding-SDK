#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "GGGearAbility.h"
#include "GGTraceParams.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_RideSeatPlacer.generated.h"

class AActor;
class AGGNPC;
class AGGRideSeat;
class AStaticMeshActor;
class UMaterialInterface;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GOATTHEMEPARK_API UGGGearAbility_RideSeatPlacer : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGRideSeat> RideSeatClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGTraceParams TraceParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SeatBackAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialValidLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInvalidLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialRemoveExistingSeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundsAdjustmentForCollisionCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> AnimationEasingFunction;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGGRideSeat> SpawnedSeats[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* PreviewActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGRideSeat* HighlightedSeat;
    
    UGGGearAbility_RideSeatPlacer();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnSeat(UPrimitiveComponent* AttachComponent, FName AttachSocket, FTransform AttachTransform, int32 SeatIndex, UMaterialInterface* SeatMaterial);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDestroySpawnedSeat(AGGRideSeat* Seat);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachNPCPooledOrMoved(AGGNPC* NPC, bool WasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedActorDestroyed(AActor* DestroyedActor);
    
};

