#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EGGLobbyUpdateType.h"
#include "GGLobbyMember.h"
#include "GGPartyMemberGoat.h"
#include "Templates/SubclassOf.h"
#include "GGOnlinePartyRepresentation.generated.h"

class AGGGoat;
class AGGPartyMemberSpawnPoint;
class UBillboardComponent;
class UGGGoatStatusWidget;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API AGGOnlinePartyRepresentation : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SpawnInParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SpawnInSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LeaveGroupParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LeaveGroupSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGGoat> GoatClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGGPartyMemberSpawnPoint> PrimaryGoatSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AGGPartyMemberSpawnPoint>> SpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGGGoatStatusWidget> GoatStatusWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PrimaryGoatStatusLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenGoatSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStandUpAfterLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D StandUpDelayRandomRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseGameAfterSpawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGPartyMemberGoat PrimaryGoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGPartyMemberGoat> PartyMemberGoats;
    
public:
    AGGOnlinePartyRepresentation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateGoatGearRepresentation();
    
    UFUNCTION(BlueprintCallable)
    void SetCanShowStatusWidgetComponent(bool bInCanShowStatusWidgetComp);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSplitscreenPlayersUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnSplitScreenEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnSessionDestroyed(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyUpdated(TEnumAsByte<EGGLobbyUpdateType> LobbyUpdateType);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyMemberLeft(const FGGLobbyMember& LobbyMember);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftLobby();
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateStatusWidgetComponentForPrimaryPlayer();
    
};

