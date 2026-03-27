#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "GGCheapCableComponent.generated.h"

class AActor;
class UCableComponent;
class UGGCheapCableComponent;
class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2MOBILE_API UGGCheapCableComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference AttachEndTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachEndToSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialLocation;
    
public:
    UGGCheapCableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    static UGGCheapCableComponent* ReplaceWithCheapCableComponent(UCableComponent* CableComponent);
    
};

