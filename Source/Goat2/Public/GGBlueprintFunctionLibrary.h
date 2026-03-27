#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EGGMobileAppVersion.h"
#include "EPlatformFlagsBP.h"
#include "Input/Events.h"
#include "AdvancedRule.h"
#include "AnimalMaterialCollection.h"
#include "EGender.h"
#include "EMoods.h"
#include "ENavDataTypes.h"
#include "ENotificationCommand.h"
#include "ENotificationPriority.h"
#include "ENotificationRemoval.h"
#include "ESaveGameType.h"
#include "ImpulseDamageEvent.h"
#include "KeyValueBase.h"
#include "Notification.h"
#include "NotificationProperties.h"
#include "PredeterminedElement.h"
#include "RadarCoordinateData.h"
#include "RadarWidgetData.h"
#include "Templates/SubclassOf.h"
#include "WidgetIconLookup.h"
#include "GGBlueprintFunctionLibrary.generated.h"

class AActor;
class AController;
class AGGCharacter;
class AGGGameState;
class AGGGoat;
class AGGGoatGameState;
class AGGNPC;
class AGGNPC_Animal;
class AGGNPC_Humanoid;
class AGGPlayerController;
class AGGPlayerGameManager;
class AGGPlayerGame_Base;
class AGGPlayerState;
class AGGVehicle;
class AGGWorldSettings;
class APawn;
class APlayerController;
class ARecastNavMesh;
class AVolume;
class IGGObjectControlInterface;
class UGGObjectControlInterface;
class UActorComponent;
class UAnimInstance;
class UAnimationAsset;
class UAudioComponent;
class UDamageType;
class UGGEffectsSpawnHolder;
class UGGEffectsSpawnHolderSoftPtrs;
class UGGEffectsSpawnResult;
class UGGGameInstance;
class UGGGlobalEventHandler;
class UGGGroundAlignedParticleComponent;
class UGGInventory;
class UGGNPCManager;
class UGGPactorAssetUserData;
class UGGProgression;
class UGGQuestManager;
class UGGRadarSystem;
class UGGStatusEffectPoolManager;
class UGGTutorialComponent;
class UGameplayEffect;
class ULevel;
class ULocalPlayer;
class UMaterialInterface;
class UMediaSoundComponent;
class UMeshComponent;
class UObject;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USkinnedMeshComponent;
class USoundClass;
class USpringArmComponent;
class UStaticMesh;
class UStringTable;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable)
class GOAT2_API UGGBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGGBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 WrapInt(int32 Value, const int32 LowerBound, const int32 UpperBound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void VolumeEncompassesPoint(AVolume* Volume, FVector Point, float SphereRadius, bool& bEncompassesPoint, float& DistanceToPoint);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UpdateKeyValueData(const UObject* WorldContextObject, const FString& Key, FKeyValueBase Value, ESaveGameType InSaveType);
    
    UFUNCTION(BlueprintCallable)
    static bool UpdateComponentOverlaps(UPrimitiveComponent* PrimitiveComponent, bool bDoNotifies);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateAudioVirtualLoops(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TimeSecondsToCustomText(float InSeconds, const FString& Format);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TimeDilateFor(const UObject* WorldContextObject, float TimeDilation, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TextToFloat(const FText& InText, float& OutFloat);
    
    UFUNCTION(BlueprintCallable)
    static void TestRandomWeight(int32 Elements, int32 Tries);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AActor* TeleportActor(AActor* Actor, const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StringToBool(const FString& inString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UParticleSystemComponent* SpawnWorldEmitterAttached(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> AttachLocation, bool bAutoDestroy);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGVehicle* SpawnVehicle(const UObject* WorldContextObject, TSubclassOf<AGGVehicle> VehicleClass, FGameplayTag Area, FVector Location, FRotator Rotation, bool ForceRelevant, bool CanGetFromPool, ESpawnActorCollisionHandlingMethod CollisionHandling, bool GenerateNewAppearance, FName AppearanceRow);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGNPC* SpawnSpecialNPC(const UObject* WorldContextObject, TSubclassOf<AGGNPC> NPCClass, FGameplayTag Area, FVector Location, FRotator Rotation, FText DisplayNameOverride, FDataTableRowHandle FemFirstName, FDataTableRowHandle MaleFirstName, FDataTableRowHandle LastName, EMoods StartingMood, bool ForceRelevant, bool CanGetFromPool, bool AsRagdoll, FVector Impulse, ESpawnActorCollisionHandlingMethod CollisionHandling);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGVehicle* SpawnRandomVehicle(const UObject* WorldContextObject, TArray<TSubclassOf<AGGVehicle>> ValidVehicleClasses, FGameplayTag Area, FVector Location, FRotator Rotation, bool ForceRelevant, bool CanGetFromPool, ESpawnActorCollisionHandlingMethod CollisionHandling, bool GenerateNewAppearance, FName AppearanceRow);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGNPC* SpawnProfessionalNPC(const UObject* WorldContextObject, TSubclassOf<AGGNPC> NPCClass, FGameplayTag Area, FVector Location, FRotator Rotation, FText DisplayNameOverride, FDataTableRowHandle FemFirstName, FDataTableRowHandle MaleFirstName, FDataTableRowHandle LastName, EMoods StartingMood, bool ForceRelevant, bool CanGetFromPool, bool AsRagdoll, FVector Impulse, ESpawnActorCollisionHandlingMethod CollisionHandling);
    
    UFUNCTION(BlueprintCallable)
    static UGGGroundAlignedParticleComponent* SpawnGroundAlignedParticle(USceneComponent* AttachToComponent, FName AttachPointName, UParticleSystem* GroundParticle, UParticleSystem* InAirParticle, float LifeSpan);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGGEffectsSpawnResult* SpawnEffectGroup(const UObject* WorldContextObject, FVector SpawnLocation, FRotator SpawnRotation, UGGEffectsSpawnHolder* EffectsHolder, USceneComponent* AttachToComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGNPC* SpawnDummyNPC(const UObject* WorldContextObject, TSubclassOf<AGGNPC> DummyClass, FGameplayTag Area, FVector Location, FRotator Rotation, FVector Impulse, bool bGenerateAppearance, EGender GenerateWithGender, FGameplayTag AppearanceArea, TArray<FString> PredeterminedElements, TArray<FPredeterminedElement> PredeterminedRowElements, const FString& AppearanceSet, TArray<FString> AppearanceOverride, FText DisplayNameOverride, FDataTableRowHandle FemFirstName, FDataTableRowHandle MaleFirstName, FDataTableRowHandle LastName, bool ForceRelevant, bool CanGetFromPool, ESpawnActorCollisionHandlingMethod CollisionHandling);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGNPC* SpawnDummyAnimalNPC(const UObject* WorldContextObject, TSubclassOf<AGGNPC_Animal> NPCClass, FGameplayTag Area, FVector Location, FRotator Rotation, FVector Impulse, const FAnimalMaterialCollection& MaterialOverride, FText DisplayNameOverride, FDataTableRowHandle FemFirstName, FDataTableRowHandle MaleFirstName, FDataTableRowHandle LastName, EMoods StartingMood, bool ForceRelevant, bool CanGetFromPool, ESpawnActorCollisionHandlingMethod CollisionHandling);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGNPC* SpawnCivilianNPC(const UObject* WorldContextObject, FGameplayTag Area, FVector Location, FRotator Rotation, EGender Gender, FGameplayTag AppearanceArea, TArray<FString> PredeterminedElements, TArray<FPredeterminedElement> PredeterminedRowElements, const FString& AppearanceSet, TArray<FString> AppearanceOverride, FText DisplayNameOverride, FDataTableRowHandle FemFirstName, FDataTableRowHandle MaleFirstName, FDataTableRowHandle LastName, FGameplayTag CivilianClassOverride, EMoods StartingMood, bool ForceRelevant, bool CanGetFromPool, bool AsRagdoll, FVector Impulse, ESpawnActorCollisionHandlingMethod CollisionHandling);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGGNPC* SpawnAnimalNPC(const UObject* WorldContextObject, TSubclassOf<AGGNPC_Animal> NPCClass, FGameplayTag Area, FVector Location, FRotator Rotation, const FAnimalMaterialCollection& MaterialOverride, FText DisplayNameOverride, FDataTableRowHandle FemFirstName, FDataTableRowHandle MaleFirstName, FDataTableRowHandle LastName, EMoods StartingMood, bool ForceRelevant, bool CanGetFromPool, bool AsRagdoll, FVector Impulse, ESpawnActorCollisionHandlingMethod CollisionHandling);
    
    UFUNCTION(BlueprintCallable)
    static void SortStrings(UPARAM(Ref) TArray<FString>& Strings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkeletonMatchesAnimation(USkeletalMesh* Skeleton, UAnimationAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    static void ShowSplashText(FText SplashTitle, FText SplashDescription, AActor* TargetPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void SetUpdateAnimationInEditor(USkeletalMeshComponent* MeshComp, bool ShouldUpdate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTimeDilation(const UObject* WorldContextObject, float TimeDilation);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoundClassOverride(UAudioComponent* AudioComponent, USoundClass* SoundClass);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnvironmentVariable(const FString& VariableName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentToNeverDistanceCull(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentInternalVelocity(USceneComponent* Component, FVector NewVelocity);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentDistanceCullDistance(UPrimitiveComponent* Component, float MaxDrawDistance);
    
    UFUNCTION(BlueprintCallable)
    static void SetBaseVisibleDistanceFactorThresholds(USkinnedMeshComponent* SkinnedMeshComponent, TArray<float> NewThresholds);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorMaterial(AActor* TargetActor, UMaterialInterface* NewMaterial, bool SetAllMaterialIndexes, int32 MaterialIndexToSet);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveSocketRelativeTransform(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RoundFloat(float InFloat, int32 NumDecimals);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector RotateVectorAroundPoint(FVector InVector, FVector RotationPoint, float Angle, FVector Axis);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetTimeDilation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMeshToDefaultMaterials(UMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void ResetDynamicsWithOwningCharacter(UAnimInstance* ThisAnimInstance);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSpringArmTraceIgnoreActor(USpringArmComponent* Target, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveInterfacedObjectFromSignificance(UObject* WorldContextObject, UObject* Obj);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveGenericTickObjectFromSignificanceManager(UObject* WorldContextObject, UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveGameplayCue(AGGGoat* Goat, FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable)
    static void RecreateMeshPhysState(UMeshComponent* MeshComp);
    
    UFUNCTION(BlueprintCallable)
    static void QueueSubtitleForMediaComponent(UMediaSoundComponent* MediaSoundComponent, FText Text, float Duration, bool bManualWordWrap, bool bSingleLine, float SubtitlePriority);
    
    UFUNCTION(BlueprintCallable)
    static void PrintWarningInChat(const FString& Warning);
    
    UFUNCTION(BlueprintCallable)
    static void PrintScriptCallstackBlueprint(const FString& Heading);
    
    UFUNCTION(BlueprintCallable)
    static void PrintErrorInChat(const FString& Error);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PausePIE(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString PasteFromClipboard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FNotificationProperties MakeNotificationProperties(FGameplayTag ContentTag, float Duration, TEnumAsByte<ENotificationPriority::Type> Priority, TEnumAsByte<ENotificationRemoval::Type> Removal, TEnumAsByte<ENotificationCommand::Type> Command);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FNotification MakeNotification(FGameplayTag Tag, FText Title, FText Body, const FString& ID, FNotificationProperties Properties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAdvancedRule MakeAdvancedRule(FGameplayTag InTag, bool bInTagExactMatch, FGameplayTag InContentTag, bool bInContentTagExactMatch, bool InReturnValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LoadEffectGroup(const UObject* WorldContextObject, UGGEffectsSpawnHolderSoftPtrs* EffectSoftSpawnHolder);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceTestByObjectType(UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceSingleByChannel(UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ECollisionChannel> Channel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, AActor* IgnoredActor, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKeyValueBase KeyValue_StringToKeyValue(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString KeyValue_KeyValueToString(FKeyValueBase KeyValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 KeyValue_KeyValueToInt(FKeyValueBase KeyValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float KeyValue_KeyValueToFloat(FKeyValueBase KeyValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool KeyValue_KeyValueToBool(FKeyValueBase KeyValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKeyValueBase KeyValue_IntToKeyValue(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKeyValueBase KeyValue_FloatToKeyValue(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKeyValueBase KeyValue_BoolToKeyValue(bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ForceDestroyComponentDelayed(UActorComponent* Component, float Delay, bool bPromoteChildren);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ForceDestroyComponent(UActorComponent* Component, bool bPromoteChildren);
    
    UFUNCTION(BlueprintCallable)
    static void K2_AddInstanceComponent(AActor* Actor, UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldMultiplayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldDedicatedOrListenServer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldClient(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingGamepad(const UObject* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTextNumeric(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlaytestingBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMobilePlatform(bool bForUI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLowEndPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGen8ConsolePlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFocusEventMouse(FFocusEvent InFocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDesktopPlatform(bool bForUI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDemoBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConsolePlatform(bool bForUI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGVehicle* IsCompVehicle(UPrimitiveComponent* Comp, bool& IsVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompNPCOverlapComp(UPrimitiveComponent* Comp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGNPC* IsCompNPC(UPrimitiveComponent* Comp, bool& IsNPC, bool& IsOverlapComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGNPC_Humanoid* IsCompHumanoid(UPrimitiveComponent* Comp, bool& IsHumanoid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompGoatMesh(UPrimitiveComponent* Comp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompGoatCapsuleComp(UPrimitiveComponent* Comp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGGoat* IsCompGoat(UPrimitiveComponent* Comp, bool& IsGoat, bool& IsCapsuleComponent, bool& IsMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGCharacter* IsCompGGCharacter(UPrimitiveComponent* Comp, bool& IsGGCharacter, bool& IsCapsuleComponent, bool& IsMeshComponent, bool& IsNPCOverlapComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGNPC_Animal* IsCompAnimal(UPrimitiveComponent* Comp, bool& IsAnimal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAnyPlayerWatchingLevelSequence(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAnyPlayerViewNear(const UObject* WorldContextObject, FVector Location, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorServerNetMode(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorInFrontArc(const AActor* Actor, const AActor* OtherActor, float Arc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IntroDisabledBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* IconLookupToTexture2D(const UObject* WorldContextObject, FWidgetIconLookup InFoundIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasObjectValidWorld(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetVersionString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGTutorialComponent* GetTutorialComponent(AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetTimeSince(UObject* WorldContextObject, float Timestamp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStaticMeshConvexElemVertexCount(UStaticMesh* StaticMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FTransform> GetSkelEditableComponentSpaceTransforms(USkeletalMeshComponent* SkelMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetShouldUseMobileHUDInput(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetServerWorldTimeSeconds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGGStatusEffectPoolManager* GetSEPoolManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetRefPoseTransformWorldSpace(USkinnedMeshComponent* SkinnedMeshComponent, FName Bone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetRefPoseTransformComponentSpace(USkinnedMeshComponent* SkinnedMeshComponent, FName Bone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetRefPoseTransform(USkinnedMeshComponent* SkinnedMeshComponent, FName Bone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARecastNavMesh* GetRecastNavMesh(const UObject* WorldContextObject, TEnumAsByte<ENavDataTypes> Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGGRadarSystem* GetRadarSystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGGQuestManager* GetQuestManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGProgression* GetProgression(AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGGPlayerController* GetPrimaryGGPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGGPlayerState* GetPlayerStateFromActor(const UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGGProgression* GetPlayerProgression(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGGInventory* GetPlayerInventory(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGGGoat* GetPlayerGoat(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGGPlayerGameManager* GetPlayerGameManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGPlayerController* GetPlayerControllerFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPlatformVariantText(FText Text, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPlatformFlagsBP GetPlatformForUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGPactorAssetUserData* GetPActorUserData(UStaticMesh* StaticMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoftObjectPath GetOverrideMainMap();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGGNPCManager* GetNPCManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGGMobileAppVersion GetMobileAppVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AGGPlayerController*> GetLocalGGPlayerControllers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FKeyValueBase GetKeyValueData(const UObject* WorldContextObject, const FString& Key, bool& Found, ESaveGameType InSaveType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetIsPIE(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsNullSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetIsEditor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetIsDemoPressMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGGInventory* GetInventory(AGGPlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetInputAxisValue(const APlayerController* PlayerController, const FName InputAxisName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGGoat* GetGoatFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGGGlobalEventHandler* GetGlobalEventHandler(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGGWorldSettings* GetGGWorldSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGGGoatGameState* GetGGGoatGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGGGameState* GetGGGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGGGameInstance* GetGGGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetFirstIntersectingTagFromContainer(FGameplayTag Tag, FGameplayTagContainer InContainer, bool bTagIsParent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetEnvironmentVariable(const FString& VariableName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetDefaultObjectFromObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetDefaultObject(UClass* ObjectClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetCurrentTimeDilation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPlatformFlagsBP GetCurrentPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AGGPlayerController* GetCurrentController(const TScriptInterface<IGGObjectControlInterface>& ObjectControlInterface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGGPlayerGame_Base* GetCurrentActivePlayerGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetControllerID(ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APawn* GetControlledPawnFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetClosestLocationToPoint(TArray<FVector> Locations, FVector Point, float& OutDistance);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetClosestActorToPoint(TArray<AActor*> Actors, FVector Point, float& OutDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetClickLocation();
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> GetBaseVisibleDistanceFactorThresholds(USkinnedMeshComponent* SkinnedMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<USceneComponent*> GetAttachChildren(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AGGPlayerState*> GetAllPlayerStates(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<AGGNPC*> GetAllNPCsWithIdentifierTag(UObject* WorldContext, FGameplayTag IdentifierTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AGGGoat*> GetAllGoats(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AGGPlayerController*> GetAllGGPlayerControllers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetActorsCurrentLevel(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ENetRole> GetActorRole(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULevel* GetActorLevel(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* FindLocalPlayerControllerWithPlayerState(const UObject* WorldContextObject, AGGPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* FindLocalPlayerControllerWithControllerId(const UObject* WorldContextObject, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USceneComponent*> FindChildComponentsWithTag(USceneComponent* Component, FName ComponentTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FindAllPActorsMissingData(const UObject* WorldContextObject, bool WarnIfSilent, bool WarnIfMissingSoundEvenIfShouldNotPlay);
    
    UFUNCTION(BlueprintCallable)
    static bool ExportStringTableToCSV(const FName StringTableName, const FString& ContentPath);
    
    UFUNCTION(BlueprintCallable)
    static void DumpStackTraceToLog(const FString& Heading);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesEntryExistInTable(UStringTable* TableAsset, const FString& EntryKey);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyComponentFromOther(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void CreateNotificationsBlueprint(TArray<APlayerController*> PCs, FGameplayTag Tag, FText Title, FText Body, const FString& ID, FNotificationProperties Properties);
    
    UFUNCTION(BlueprintCallable)
    static void CreateNotificationExplicitBlueprint(APlayerController* PC, FNotification Notification);
    
    UFUNCTION(BlueprintCallable)
    static void CreateNotificationBlueprint(APlayerController* PC, FGameplayTag Tag, FText Title, FText Body, const FString& ID, FNotificationProperties Properties);
    
    UFUNCTION(BlueprintCallable)
    static USceneComponent* CreateComponent(TSubclassOf<USceneComponent> ComponentClass, AActor* Owner, USceneComponent* AttachComponent, FTransform Transform, FName AttachSocket, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool WeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    static void CopyToClipboard(const FString& TextToCopy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Conv_TextToFloat(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_TagToString(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentSweepMulti(TArray<FHitResult>& OutHits, UPrimitiveComponent* Component, const FVector& StartLocation, const FVector& EndLocation, const FRotator& StartRotation, const TArray<AActor*>& IgnoredActors, bool bFindInitialOverlaps, bool bTraceComplex, bool bReturnPhysicalMaterial, bool bIgnoreBlocks);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AActor* CloneActor(AActor* Actor, const FTransform NewTransform, bool bCopyPhysics, ESpawnActorCollisionHandlingMethod CollisionHandlingMethod, FVector NewImpulse);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAllTimers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ClampedNormalizeToRange(float Value, float RangeMin, float RangeMax);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CancelLatentActions(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator CalculateSurfaceRotation_K2(FVector SurfaceNormal, const FTransform& ReferenceFrame, bool bReturnInLocalSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateSurfaceAngle_K2(FVector SurfaceNormal, const FTransform& ReferenceFrame, bool bReturnInLocalSpace);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakRadarWidgetData(FRadarWidgetData InData, FRadarCoordinateData& Data, UWidget*& Widget);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyRagdollVelocityChange(TSubclassOf<UGameplayEffect> GameplayEffectClass, AGGGoat* Goat, float Magnitude, FName DataTagName);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyPlayerMSChange(TSubclassOf<UGameplayEffect> GameplayEffectClass, AGGGoat* Goat, float Magnitude, FName DataTagName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static float ApplyImpulseDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, FImpulseDamageEvent DamageEvent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplyDisgustingStatusOverlap(const UObject* WorldContextObject, AActor* SourceActor, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float AngleBetweenVectors(const FVector& A, const FVector& B);
    
    UFUNCTION(BlueprintCallable)
    static void AddSpringArmTraceIgnoreActor(USpringArmComponent* Target, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddInterfacedObjectToSignificance(UObject* WorldContextObject, UObject* Obj);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddGenericTickObjectToSignificanceManager(UObject* WorldContextObject, UObject* Obj);
    
};

