#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GGActorName.h"
#include "GGHeadbuttableObjectInterface.h"
#include "GGLickableActorInterface.h"
#include "GGNamedActorInfo.h"
#include "GGNamedActorInterface.h"
#include "GGMover.generated.h"

class AGGGoat;
class UDataTable;
class UMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGMover : public AActor, public IGGNamedActorInterface, public IGGLickableActorInterface, public IGGHeadbuttableObjectInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MoverMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeLicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentActorName, meta=(AllowPrivateAccess=true))
    FGGActorName CurrentActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGNamedActorInfo DefaultActorNameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NameModifierTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMeshNameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGNamedActorInfo ActorNameInfo;
    
    AGGMover(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetGoatSimName(const FText& NewName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveGoatSimNameModifier(FGameplayTag ModifierTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PrepareForLick();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentActorName();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObjectWasHeadbutted(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoverLicked(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoverHeadbutted(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoverDropped(AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLickInfo(FVector LickLocation, FName& BoneName, FRotator& MeshLickRotation, FVector& RelativeLickLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMeshComponent* GetLickableActorMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetHasActorName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetGoatSimName(bool WithStyling);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetFullGoatSimName(bool WithStyling);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeLicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeHeadbutted(AGGGoat* HeadbuttingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddGoatSimNameModifier(FGameplayTag ModifierTag, const FText& OverrideText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorWasLicked(AGGGoat* LickingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorStoppedBeingLicked(AGGGoat* LickingGoat);
    

    // Fix for true pure virtual functions not being implemented
};

