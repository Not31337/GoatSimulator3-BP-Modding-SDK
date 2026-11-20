#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/MovementComponent.h"
#include "EFollowMode.h"
#include "Templates/SubclassOf.h"
#include "GGSplineMovementComponent.generated.h"

class AActor;
class UGGSplineMovementComponent;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGSplineMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFollowMode FollowMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementInputAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementInputBrakeAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPawnOwnerMovementInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignYawWithSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignPitchWithSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignRollWithSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGravityForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerminalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingExtrapolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientInterpolationTeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinueFollowSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetToSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepInitialOffsetToSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleportToSplineStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistanceToFindGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> FallbackTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* ActorWithSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_SplineToFollow, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineToFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReachedSplineEnd, meta=(AllowPrivateAccess=true))
    bool bReachedSplineEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerSplineDistance, meta=(AllowPrivateAccess=true))
    float ServerSplineDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerSplineMovementSpeed;
    
    UGGSplineMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static UGGSplineMovementComponent* StartFollowingSpline(AActor* ParentActor, USplineComponent* NewSplineToFollow, EFollowMode NewFollowMode, bool NewBTeleportToSplineStart, float InitialSpeed, TSubclassOf<UGGSplineMovementComponent> OptSplineMovementClass);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineToFollow_Actor(AActor* ActorWithSplineComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineToFollow(USplineComponent* Spline);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHoldCurrentLocation(bool bHold);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetBoostTrackAcceleration(float NewAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SplineToFollow();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerSplineDistance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReachedSplineEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentAccelerationVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentAcceleration() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddBoostTrackAcceleration(float AdditionalAcceleration);
    
};

