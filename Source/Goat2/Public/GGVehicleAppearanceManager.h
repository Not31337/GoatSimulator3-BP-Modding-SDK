#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AppearanceRepElement.h"
#include "AttachmentElement.h"
#include "OnVehicleAppearanceChangedDelegate.h"
#include "GGVehicleAppearanceManager.generated.h"

class AGGVehicle;
class UDataTable;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGVehicleAppearanceManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleAppearanceChanged OnVehicleAppearanceChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AppearanceTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGVehicle* OwnerVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OwnerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VehicleAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedVehicleAppearance, meta=(AllowPrivateAccess=true))
    FAppearanceRepElement ReplicatedVehicleAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachmentElement> CurrentAttachments;
    
public:
    UGGVehicleAppearanceManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void VehicleAppearanceLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedVehicleAppearance();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentApperance();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool GenerateAndSetNewAppearance(bool bExcludeCurrent, const FString& RowName);
    
};

