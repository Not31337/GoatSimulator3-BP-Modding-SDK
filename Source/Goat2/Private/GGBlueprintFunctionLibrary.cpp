#include "GGBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UGGBlueprintFunctionLibrary::UGGBlueprintFunctionLibrary() {
}

int32 UGGBlueprintFunctionLibrary::WrapInt(int32 Value, const int32 LowerBound, const int32 UpperBound) {
    return 0;
}

void UGGBlueprintFunctionLibrary::VolumeEncompassesPoint(AVolume* Volume, FVector Point, float SphereRadius, bool& bEncompassesPoint, float& DistanceToPoint) {
}

bool UGGBlueprintFunctionLibrary::UpdateKeyValueData(const UObject* WorldContextObject, const FString& Key, FKeyValueBase Value, ESaveGameType InSaveType) {
    return false;
}

bool UGGBlueprintFunctionLibrary::UpdateComponentOverlaps(UPrimitiveComponent* PrimitiveComponent, bool bDoNotifies) {
    return false;
}

void UGGBlueprintFunctionLibrary::UpdateAudioVirtualLoops(const UObject* WorldContextObject) {
}

FText UGGBlueprintFunctionLibrary::TimeSecondsToCustomText(float InSeconds, const FString& Format) {
    return FText::GetEmpty();
}

void UGGBlueprintFunctionLibrary::TimeDilateFor(const UObject* WorldContextObject, float TimeDilation, float Duration) {
}

bool UGGBlueprintFunctionLibrary::TextToFloat(const FText& InText, float& OutFloat) {
    return false;
}

void UGGBlueprintFunctionLibrary::TestRandomWeight(int32 Elements, int32 Tries) {
}

AActor* UGGBlueprintFunctionLibrary::TeleportActor(AActor* Actor, const FVector& Location, const FRotator& Rotation) {
    return NULL;
}

bool UGGBlueprintFunctionLibrary::StringToBool(const FString& inString) {
    return false;
}

UParticleSystemComponent* UGGBlueprintFunctionLibrary::SpawnWorldEmitterAttached(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> AttachLocation, bool bAutoDestroy) {
    return NULL;
}

AGGVehicle* UGGBlueprintFunctionLibrary::SpawnVehicle(const UObject* WorldContextObject, TSubclassOf<AGGVehicle> VehicleClass, FGameplayTag Area, FVector Location, FRotator Rotation, bool ForceRelevant, bool CanGetFromPool, ESpawnActorCollisionHandlingMethod CollisionHandling, bool GenerateNewAppearance, FName AppearanceRow) {
    return NULL;
}

AGGNPC* UGGBlueprintFunctionLibrary::SpawnSpecialNPC(const UObject* WorldContextObject, TSubclassOf<AGGNPC> NPCClass, FGameplayTag Area, FVector Location, FRotator Rotation, FText DisplayNameOverride, FDataTableRowHandle FemFirstName, FDataTableRowHandle MaleFirstName, FDataTableRowHandle LastName, EMoods StartingMood, bool ForceRelevant, bool CanGetFromPool, bool AsRagdoll, FVector Impulse, ESpawnActorCollisionHandlingMethod CollisionHandling) {
    return NULL;
}

AGGVehicle* UGGBlueprintFunctionLibrary::SpawnRandomVehicle(const UObject* WorldContextObject, TArray<TSubclassOf<AGGVehicle>> ValidVehicleClasses, FGameplayTag Area, FVector Location, FRotator Rotation, bool ForceRelevant, bool CanGetFromPool, ESpawnActorCollisionHandlingMethod CollisionHandling, bool GenerateNewAppearance, FName AppearanceRow) {
    return NULL;
}

AGGNPC* UGGBlueprintFunctionLibrary::SpawnProfessionalNPC(const UObject* WorldContextObject, TSubclassOf<AGGNPC> NPCClass, FGameplayTag Area, FVector Location, FRotator Rotation, FText DisplayNameOverride, FDataTableRowHandle FemFirstName, FDataTableRowHandle MaleFirstName, FDataTableRowHandle LastName, EMoods StartingMood, bool ForceRelevant, bool CanGetFromPool, bool AsRagdoll, FVector Impulse, ESpawnActorCollisionHandlingMethod CollisionHandling) {
    return NULL;
}

UGGGroundAlignedParticleComponent* UGGBlueprintFunctionLibrary::SpawnGroundAlignedParticle(USceneComponent* AttachToComponent, FName AttachPointName, UParticleSystem* GroundParticle, UParticleSystem* InAirParticle, float LifeSpan) {
    return NULL;
}

UGGEffectsSpawnResult* UGGBlueprintFunctionLibrary::SpawnEffectGroup(const UObject* WorldContextObject, FVector SpawnLocation, FRotator SpawnRotation, UGGEffectsSpawnHolder* EffectsHolder, USceneComponent* AttachToComponent) {
    return NULL;
}

AGGNPC* UGGBlueprintFunctionLibrary::SpawnDummyNPC(const UObject* WorldContextObject, TSubclassOf<AGGNPC> DummyClass, FGameplayTag Area, FVector Location, FRotator Rotation, FVector Impulse, bool bGenerateAppearance, EGender GenerateWithGender, FGameplayTag AppearanceArea, TArray<FString> PredeterminedElements, TArray<FPredeterminedElement> PredeterminedRowElements, const FString& AppearanceSet, TArray<FString> AppearanceOverride, FText DisplayNameOverride, FDataTableRowHandle FemFirstName, FDataTableRowHandle MaleFirstName, FDataTableRowHandle LastName, bool ForceRelevant, bool CanGetFromPool, ESpawnActorCollisionHandlingMethod CollisionHandling) {
    return NULL;
}

AGGNPC* UGGBlueprintFunctionLibrary::SpawnDummyAnimalNPC(const UObject* WorldContextObject, TSubclassOf<AGGNPC_Animal> NPCClass, FGameplayTag Area, FVector Location, FRotator Rotation, FVector Impulse, const FAnimalMaterialCollection& MaterialOverride, FText DisplayNameOverride, FDataTableRowHandle FemFirstName, FDataTableRowHandle MaleFirstName, FDataTableRowHandle LastName, EMoods StartingMood, bool ForceRelevant, bool CanGetFromPool, ESpawnActorCollisionHandlingMethod CollisionHandling) {
    return NULL;
}

AGGNPC* UGGBlueprintFunctionLibrary::SpawnCivilianNPC(const UObject* WorldContextObject, FGameplayTag Area, FVector Location, FRotator Rotation, EGender Gender, FGameplayTag AppearanceArea, TArray<FString> PredeterminedElements, TArray<FPredeterminedElement> PredeterminedRowElements, const FString& AppearanceSet, TArray<FString> AppearanceOverride, FText DisplayNameOverride, FDataTableRowHandle FemFirstName, FDataTableRowHandle MaleFirstName, FDataTableRowHandle LastName, FGameplayTag CivilianClassOverride, EMoods StartingMood, bool ForceRelevant, bool CanGetFromPool, bool AsRagdoll, FVector Impulse, ESpawnActorCollisionHandlingMethod CollisionHandling) {
    return NULL;
}

AGGNPC* UGGBlueprintFunctionLibrary::SpawnAnimalNPC(const UObject* WorldContextObject, TSubclassOf<AGGNPC_Animal> NPCClass, FGameplayTag Area, FVector Location, FRotator Rotation, const FAnimalMaterialCollection& MaterialOverride, FText DisplayNameOverride, FDataTableRowHandle FemFirstName, FDataTableRowHandle MaleFirstName, FDataTableRowHandle LastName, EMoods StartingMood, bool ForceRelevant, bool CanGetFromPool, bool AsRagdoll, FVector Impulse, ESpawnActorCollisionHandlingMethod CollisionHandling) {
    return NULL;
}

void UGGBlueprintFunctionLibrary::SortStrings(TArray<FString>& Strings) {
}

bool UGGBlueprintFunctionLibrary::SkeletonMatchesAnimation(USkeletalMesh* Skeleton, UAnimationAsset* Asset) {
    return false;
}

void UGGBlueprintFunctionLibrary::ShowSplashText(FText SplashTitle, FText SplashDescription, AActor* TargetPlayer) {
}

void UGGBlueprintFunctionLibrary::SetUpdateAnimationInEditor(USkeletalMeshComponent* MeshComp, bool ShouldUpdate) {
}

void UGGBlueprintFunctionLibrary::SetTimeDilation(const UObject* WorldContextObject, float TimeDilation) {
}

void UGGBlueprintFunctionLibrary::SetSoundClassOverride(UAudioComponent* AudioComponent, USoundClass* SoundClass) {
}

void UGGBlueprintFunctionLibrary::SetEnvironmentVariable(const FString& VariableName, const FString& Value) {
}

void UGGBlueprintFunctionLibrary::SetComponentToNeverDistanceCull(UPrimitiveComponent* Component) {
}

void UGGBlueprintFunctionLibrary::SetComponentInternalVelocity(USceneComponent* Component, FVector NewVelocity) {
}

void UGGBlueprintFunctionLibrary::SetComponentDistanceCullDistance(UPrimitiveComponent* Component, float MaxDrawDistance) {
}

void UGGBlueprintFunctionLibrary::SetBaseVisibleDistanceFactorThresholds(USkinnedMeshComponent* SkinnedMeshComponent, TArray<float> NewThresholds) {
}

void UGGBlueprintFunctionLibrary::SetActorMaterial(AActor* TargetActor, UMaterialInterface* NewMaterial, bool SetAllMaterialIndexes, int32 MaterialIndexToSet) {
}

void UGGBlueprintFunctionLibrary::SaveSocketRelativeTransform(const UObject* WorldContextObject) {
}

float UGGBlueprintFunctionLibrary::RoundFloat(float InFloat, int32 NumDecimals) {
    return 0.0f;
}

FVector UGGBlueprintFunctionLibrary::RotateVectorAroundPoint(FVector InVector, FVector RotationPoint, float Angle, FVector Axis) {
    return FVector{};
}

void UGGBlueprintFunctionLibrary::ResetTimeDilation(const UObject* WorldContextObject) {
}

void UGGBlueprintFunctionLibrary::ResetMeshToDefaultMaterials(UMeshComponent* MeshComponent) {
}

void UGGBlueprintFunctionLibrary::ResetDynamicsWithOwningCharacter(UAnimInstance* ThisAnimInstance) {
}

void UGGBlueprintFunctionLibrary::RemoveSpringArmTraceIgnoreActor(USpringArmComponent* Target, AActor* Actor) {
}

void UGGBlueprintFunctionLibrary::RemoveInterfacedObjectFromSignificance(UObject* WorldContextObject, UObject* Obj) {
}

void UGGBlueprintFunctionLibrary::RemoveGenericTickObjectFromSignificanceManager(UObject* WorldContextObject, UObject* Obj) {
}

void UGGBlueprintFunctionLibrary::RemoveGameplayCue(AGGGoat* Goat, FGameplayTag GameplayTag) {
}

void UGGBlueprintFunctionLibrary::RecreateMeshPhysState(UMeshComponent* MeshComp) {
}

void UGGBlueprintFunctionLibrary::QueueSubtitleForMediaComponent(UMediaSoundComponent* MediaSoundComponent, FText Text, float Duration, bool bManualWordWrap, bool bSingleLine, float SubtitlePriority) {
}

void UGGBlueprintFunctionLibrary::PrintWarningInChat(const FString& Warning) {
}

void UGGBlueprintFunctionLibrary::PrintScriptCallstackBlueprint(const FString& Heading) {
}

void UGGBlueprintFunctionLibrary::PrintErrorInChat(const FString& Error) {
}

void UGGBlueprintFunctionLibrary::PausePIE(const UObject* WorldContextObject) {
}

FString UGGBlueprintFunctionLibrary::PasteFromClipboard() {
    return TEXT("");
}

FNotificationProperties UGGBlueprintFunctionLibrary::MakeNotificationProperties(FGameplayTag ContentTag, float Duration, TEnumAsByte<ENotificationPriority::Type> Priority, TEnumAsByte<ENotificationRemoval::Type> Removal, TEnumAsByte<ENotificationCommand::Type> Command) {
    return FNotificationProperties{};
}

FNotification UGGBlueprintFunctionLibrary::MakeNotification(FGameplayTag Tag, FText Title, FText Body, const FString& ID, FNotificationProperties Properties) {
    return FNotification{};
}

FAdvancedRule UGGBlueprintFunctionLibrary::MakeAdvancedRule(FGameplayTag InTag, bool bInTagExactMatch, FGameplayTag InContentTag, bool bInContentTagExactMatch, bool InReturnValue) {
    return FAdvancedRule{};
}

bool UGGBlueprintFunctionLibrary::LoadEffectGroup(const UObject* WorldContextObject, UGGEffectsSpawnHolderSoftPtrs* EffectSoftSpawnHolder) {
    return false;
}

bool UGGBlueprintFunctionLibrary::LineTraceTestByObjectType(UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ECollisionChannel> CollisionChannel) {
    return false;
}

bool UGGBlueprintFunctionLibrary::LineTraceSingleByChannel(UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ECollisionChannel> Channel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, AActor* IgnoredActor, FHitResult& OutHit) {
    return false;
}

FKeyValueBase UGGBlueprintFunctionLibrary::KeyValue_StringToKeyValue(const FString& Value) {
    return FKeyValueBase{};
}

FString UGGBlueprintFunctionLibrary::KeyValue_KeyValueToString(FKeyValueBase KeyValue) {
    return TEXT("");
}

int32 UGGBlueprintFunctionLibrary::KeyValue_KeyValueToInt(FKeyValueBase KeyValue) {
    return 0;
}

float UGGBlueprintFunctionLibrary::KeyValue_KeyValueToFloat(FKeyValueBase KeyValue) {
    return 0.0f;
}

bool UGGBlueprintFunctionLibrary::KeyValue_KeyValueToBool(FKeyValueBase KeyValue) {
    return false;
}

FKeyValueBase UGGBlueprintFunctionLibrary::KeyValue_IntToKeyValue(int32 Value) {
    return FKeyValueBase{};
}

FKeyValueBase UGGBlueprintFunctionLibrary::KeyValue_FloatToKeyValue(float Value) {
    return FKeyValueBase{};
}

FKeyValueBase UGGBlueprintFunctionLibrary::KeyValue_BoolToKeyValue(bool Value) {
    return FKeyValueBase{};
}

void UGGBlueprintFunctionLibrary::K2_ForceDestroyComponentDelayed(UActorComponent* Component, float Delay, bool bPromoteChildren) {
}

void UGGBlueprintFunctionLibrary::K2_ForceDestroyComponent(UActorComponent* Component, bool bPromoteChildren) {
}

void UGGBlueprintFunctionLibrary::K2_AddInstanceComponent(AActor* Actor, UActorComponent* Component) {
}

bool UGGBlueprintFunctionLibrary::IsWorldMultiplayer(const UObject* WorldContextObject) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsWorldDedicatedOrListenServer(const UObject* WorldContextObject) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsWorldClient(const UObject* WorldContextObject) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsUsingGamepad(const UObject* Target) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsTextNumeric(const FText& InText) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsShippingBuild() {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsPlaytestingBuild() {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsMobilePlatform(bool bForUI) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsLowEndPlatform() {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsGen8ConsolePlatform() {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsFocusEventMouse(FFocusEvent InFocusEvent) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsDesktopPlatform(bool bForUI) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsDemoBuild() {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsConsolePlatform(bool bForUI) {
    return false;
}

AGGVehicle* UGGBlueprintFunctionLibrary::IsCompVehicle(UPrimitiveComponent* Comp, bool& IsVehicle) {
    return NULL;
}

bool UGGBlueprintFunctionLibrary::IsCompNPCOverlapComp(UPrimitiveComponent* Comp) {
    return false;
}

AGGNPC* UGGBlueprintFunctionLibrary::IsCompNPC(UPrimitiveComponent* Comp, bool& IsNPC, bool& IsOverlapComp) {
    return NULL;
}

AGGNPC_Humanoid* UGGBlueprintFunctionLibrary::IsCompHumanoid(UPrimitiveComponent* Comp, bool& IsHumanoid) {
    return NULL;
}

bool UGGBlueprintFunctionLibrary::IsCompGoatMesh(UPrimitiveComponent* Comp) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsCompGoatCapsuleComp(UPrimitiveComponent* Comp) {
    return false;
}

AGGGoat* UGGBlueprintFunctionLibrary::IsCompGoat(UPrimitiveComponent* Comp, bool& IsGoat, bool& IsCapsuleComponent, bool& IsMeshComponent) {
    return NULL;
}

AGGCharacter* UGGBlueprintFunctionLibrary::IsCompGGCharacter(UPrimitiveComponent* Comp, bool& IsGGCharacter, bool& IsCapsuleComponent, bool& IsMeshComponent, bool& IsNPCOverlapComponent) {
    return NULL;
}

AGGNPC_Animal* UGGBlueprintFunctionLibrary::IsCompAnimal(UPrimitiveComponent* Comp, bool& IsAnimal) {
    return NULL;
}

bool UGGBlueprintFunctionLibrary::IsAnyPlayerWatchingLevelSequence(const UObject* WorldContextObject) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsAnyPlayerViewNear(const UObject* WorldContextObject, FVector Location, float Distance) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsActorServerNetMode(AActor* Actor) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IsActorInFrontArc(const AActor* Actor, const AActor* OtherActor, float Arc) {
    return false;
}

bool UGGBlueprintFunctionLibrary::IntroDisabledBuild() {
    return false;
}

UTexture2D* UGGBlueprintFunctionLibrary::IconLookupToTexture2D(const UObject* WorldContextObject, FWidgetIconLookup InFoundIcon) {
    return NULL;
}

bool UGGBlueprintFunctionLibrary::HasObjectValidWorld(const UObject* InObject) {
    return false;
}

FString UGGBlueprintFunctionLibrary::GetVersionString() {
    return TEXT("");
}

UGGTutorialComponent* UGGBlueprintFunctionLibrary::GetTutorialComponent(AGGPlayerController* PC) {
    return NULL;
}

float UGGBlueprintFunctionLibrary::GetTimeSince(UObject* WorldContextObject, float Timestamp) {
    return 0.0f;
}

int32 UGGBlueprintFunctionLibrary::GetStaticMeshConvexElemVertexCount(UStaticMesh* StaticMesh) {
    return 0;
}

TArray<FTransform> UGGBlueprintFunctionLibrary::GetSkelEditableComponentSpaceTransforms(USkeletalMeshComponent* SkelMesh) {
    return TArray<FTransform>();
}

bool UGGBlueprintFunctionLibrary::GetShouldUseMobileHUDInput(const UObject* WorldContextObject) {
    return false;
}

float UGGBlueprintFunctionLibrary::GetServerWorldTimeSeconds(const UObject* WorldContextObject) {
    return 0.0f;
}

UGGStatusEffectPoolManager* UGGBlueprintFunctionLibrary::GetSEPoolManager(const UObject* WorldContextObject) {
    return NULL;
}

FTransform UGGBlueprintFunctionLibrary::GetRefPoseTransformWorldSpace(USkinnedMeshComponent* SkinnedMeshComponent, FName Bone) {
    return FTransform{};
}

FTransform UGGBlueprintFunctionLibrary::GetRefPoseTransformComponentSpace(USkinnedMeshComponent* SkinnedMeshComponent, FName Bone) {
    return FTransform{};
}

FTransform UGGBlueprintFunctionLibrary::GetRefPoseTransform(USkinnedMeshComponent* SkinnedMeshComponent, FName Bone) {
    return FTransform{};
}

ARecastNavMesh* UGGBlueprintFunctionLibrary::GetRecastNavMesh(const UObject* WorldContextObject, TEnumAsByte<ENavDataTypes> Type) {
    return NULL;
}

UGGRadarSystem* UGGBlueprintFunctionLibrary::GetRadarSystem(const UObject* WorldContextObject) {
    return NULL;
}

UGGQuestManager* UGGBlueprintFunctionLibrary::GetQuestManager(const UObject* WorldContextObject) {
    return NULL;
}

UGGProgression* UGGBlueprintFunctionLibrary::GetProgression(AGGPlayerController* PC) {
    return NULL;
}

AGGPlayerController* UGGBlueprintFunctionLibrary::GetPrimaryGGPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

AGGPlayerState* UGGBlueprintFunctionLibrary::GetPlayerStateFromActor(const UObject* WorldContextObject, AActor* Actor) {
    return NULL;
}

UGGProgression* UGGBlueprintFunctionLibrary::GetPlayerProgression(const UObject* WorldContextObject) {
    return NULL;
}

UGGInventory* UGGBlueprintFunctionLibrary::GetPlayerInventory(const UObject* WorldContextObject) {
    return NULL;
}

AGGGoat* UGGBlueprintFunctionLibrary::GetPlayerGoat(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

AGGPlayerGameManager* UGGBlueprintFunctionLibrary::GetPlayerGameManager(const UObject* WorldContextObject) {
    return NULL;
}

AGGPlayerController* UGGBlueprintFunctionLibrary::GetPlayerControllerFromActor(AActor* Actor) {
    return NULL;
}

FText UGGBlueprintFunctionLibrary::GetPlatformVariantText(FText Text, bool& bOutSuccess) {
    return FText::GetEmpty();
}

EPlatformFlagsBP UGGBlueprintFunctionLibrary::GetPlatformForUI() {
    return EPlatformFlagsBP::None;
}

UGGPactorAssetUserData* UGGBlueprintFunctionLibrary::GetPActorUserData(UStaticMesh* StaticMesh) {
    return NULL;
}

FSoftObjectPath UGGBlueprintFunctionLibrary::GetOverrideMainMap() {
    return FSoftObjectPath{};
}

UGGNPCManager* UGGBlueprintFunctionLibrary::GetNPCManager(const UObject* WorldContextObject) {
    return NULL;
}

EGGMobileAppVersion UGGBlueprintFunctionLibrary::GetMobileAppVersion() {
    return EGGMobileAppVersion::Vanilla;
}

TArray<AGGPlayerController*> UGGBlueprintFunctionLibrary::GetLocalGGPlayerControllers(const UObject* WorldContextObject) {
    return TArray<AGGPlayerController*>();
}

FKeyValueBase UGGBlueprintFunctionLibrary::GetKeyValueData(const UObject* WorldContextObject, const FString& Key, bool& Found, ESaveGameType InSaveType) {
    return FKeyValueBase{};
}

bool UGGBlueprintFunctionLibrary::GetIsPIE(const UObject* WorldContextObject) {
    return false;
}

bool UGGBlueprintFunctionLibrary::GetIsNullSubsystem() {
    return false;
}

bool UGGBlueprintFunctionLibrary::GetIsEditor(const UObject* WorldContextObject) {
    return false;
}

bool UGGBlueprintFunctionLibrary::GetIsDemoPressMode(const UObject* WorldContextObject) {
    return false;
}

UGGInventory* UGGBlueprintFunctionLibrary::GetInventory(AGGPlayerController* PC) {
    return NULL;
}

float UGGBlueprintFunctionLibrary::GetInputAxisValue(const APlayerController* PlayerController, const FName InputAxisName) {
    return 0.0f;
}

AGGGoat* UGGBlueprintFunctionLibrary::GetGoatFromActor(AActor* Actor) {
    return NULL;
}

UGGGlobalEventHandler* UGGBlueprintFunctionLibrary::GetGlobalEventHandler(const UObject* WorldContextObject) {
    return NULL;
}

AGGWorldSettings* UGGBlueprintFunctionLibrary::GetGGWorldSettings(const UObject* WorldContextObject) {
    return NULL;
}

AGGGoatGameState* UGGBlueprintFunctionLibrary::GetGGGoatGameState(const UObject* WorldContextObject) {
    return NULL;
}

AGGGameState* UGGBlueprintFunctionLibrary::GetGGGameState(const UObject* WorldContextObject) {
    return NULL;
}

UGGGameInstance* UGGBlueprintFunctionLibrary::GetGGGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

FGameplayTag UGGBlueprintFunctionLibrary::GetFirstIntersectingTagFromContainer(FGameplayTag Tag, FGameplayTagContainer InContainer, bool bTagIsParent) {
    return FGameplayTag{};
}

FString UGGBlueprintFunctionLibrary::GetEnvironmentVariable(const FString& VariableName) {
    return TEXT("");
}

UObject* UGGBlueprintFunctionLibrary::GetDefaultObjectFromObject(UObject* Object) {
    return NULL;
}

UObject* UGGBlueprintFunctionLibrary::GetDefaultObject(UClass* ObjectClass) {
    return NULL;
}

float UGGBlueprintFunctionLibrary::GetCurrentTimeDilation(const UObject* WorldContextObject) {
    return 0.0f;
}

EPlatformFlagsBP UGGBlueprintFunctionLibrary::GetCurrentPlatform() {
    return EPlatformFlagsBP::None;
}

AGGPlayerController* UGGBlueprintFunctionLibrary::GetCurrentController(const TScriptInterface<IGGObjectControlInterface>& ObjectControlInterface) {
    return NULL;
}

AGGPlayerGame_Base* UGGBlueprintFunctionLibrary::GetCurrentActivePlayerGame(const UObject* WorldContextObject) {
    return NULL;
}

int32 UGGBlueprintFunctionLibrary::GetControllerID(ULocalPlayer* LocalPlayer) {
    return 0;
}

APawn* UGGBlueprintFunctionLibrary::GetControlledPawnFromActor(AActor* Actor) {
    return NULL;
}

FVector UGGBlueprintFunctionLibrary::GetClosestLocationToPoint(TArray<FVector> Locations, FVector Point, float& OutDistance) {
    return FVector{};
}

AActor* UGGBlueprintFunctionLibrary::GetClosestActorToPoint(TArray<AActor*> Actors, FVector Point, float& OutDistance) {
    return NULL;
}

FVector UGGBlueprintFunctionLibrary::GetClickLocation() {
    return FVector{};
}

TArray<float> UGGBlueprintFunctionLibrary::GetBaseVisibleDistanceFactorThresholds(USkinnedMeshComponent* SkinnedMeshComponent) {
    return TArray<float>();
}

TArray<USceneComponent*> UGGBlueprintFunctionLibrary::GetAttachChildren(USceneComponent* Component) {
    return TArray<USceneComponent*>();
}

TArray<AGGPlayerState*> UGGBlueprintFunctionLibrary::GetAllPlayerStates(const UObject* WorldContextObject) {
    return TArray<AGGPlayerState*>();
}

TArray<AGGNPC*> UGGBlueprintFunctionLibrary::GetAllNPCsWithIdentifierTag(UObject* WorldContext, FGameplayTag IdentifierTag) {
    return TArray<AGGNPC*>();
}

TArray<AGGGoat*> UGGBlueprintFunctionLibrary::GetAllGoats(const UObject* WorldContextObject) {
    return TArray<AGGGoat*>();
}

TArray<AGGPlayerController*> UGGBlueprintFunctionLibrary::GetAllGGPlayerControllers(const UObject* WorldContextObject) {
    return TArray<AGGPlayerController*>();
}

FString UGGBlueprintFunctionLibrary::GetActorsCurrentLevel(AActor* Actor) {
    return TEXT("");
}

TEnumAsByte<ENetRole> UGGBlueprintFunctionLibrary::GetActorRole(AActor* Actor) {
    return ROLE_None;
}

ULevel* UGGBlueprintFunctionLibrary::GetActorLevel(AActor* Actor) {
    return NULL;
}

APlayerController* UGGBlueprintFunctionLibrary::FindLocalPlayerControllerWithPlayerState(const UObject* WorldContextObject, AGGPlayerState* PlayerState) {
    return NULL;
}

APlayerController* UGGBlueprintFunctionLibrary::FindLocalPlayerControllerWithControllerId(const UObject* WorldContextObject, int32 ControllerId) {
    return NULL;
}

TArray<USceneComponent*> UGGBlueprintFunctionLibrary::FindChildComponentsWithTag(USceneComponent* Component, FName ComponentTag) {
    return TArray<USceneComponent*>();
}

void UGGBlueprintFunctionLibrary::FindAllPActorsMissingData(const UObject* WorldContextObject, bool WarnIfSilent, bool WarnIfMissingSoundEvenIfShouldNotPlay) {
}

bool UGGBlueprintFunctionLibrary::ExportStringTableToCSV(const FName StringTableName, const FString& ContentPath) {
    return false;
}

void UGGBlueprintFunctionLibrary::DumpStackTraceToLog(const FString& Heading) {
}

bool UGGBlueprintFunctionLibrary::DoesEntryExistInTable(UStringTable* TableAsset, const FString& EntryKey) {
    return false;
}

void UGGBlueprintFunctionLibrary::DestroyComponentFromOther(UActorComponent* Component) {
}

void UGGBlueprintFunctionLibrary::CreateNotificationsBlueprint(TArray<APlayerController*> PCs, FGameplayTag Tag, FText Title, FText Body, const FString& ID, FNotificationProperties Properties) {
}

void UGGBlueprintFunctionLibrary::CreateNotificationExplicitBlueprint(APlayerController* PC, FNotification Notification) {
}

void UGGBlueprintFunctionLibrary::CreateNotificationBlueprint(APlayerController* PC, FGameplayTag Tag, FText Title, FText Body, const FString& ID, FNotificationProperties Properties) {
}

USceneComponent* UGGBlueprintFunctionLibrary::CreateComponent(TSubclassOf<USceneComponent> ComponentClass, AActor* Owner, USceneComponent* AttachComponent, FTransform Transform, FName AttachSocket, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool WeldSimulatedBodies) {
    return NULL;
}

void UGGBlueprintFunctionLibrary::CopyToClipboard(const FString& TextToCopy) {
}

float UGGBlueprintFunctionLibrary::Conv_TextToFloat(const FText& InText) {
    return 0.0f;
}

FString UGGBlueprintFunctionLibrary::Conv_TagToString(FGameplayTag InTag) {
    return TEXT("");
}

bool UGGBlueprintFunctionLibrary::ComponentSweepMulti(TArray<FHitResult>& OutHits, UPrimitiveComponent* Component, const FVector& StartLocation, const FVector& EndLocation, const FRotator& StartRotation, const TArray<AActor*>& IgnoredActors, bool bFindInitialOverlaps, bool bTraceComplex, bool bReturnPhysicalMaterial, bool bIgnoreBlocks) {
    return false;
}

AActor* UGGBlueprintFunctionLibrary::CloneActor(AActor* Actor, const FTransform NewTransform, bool bCopyPhysics, ESpawnActorCollisionHandlingMethod CollisionHandlingMethod, FVector NewImpulse) {
    return NULL;
}

void UGGBlueprintFunctionLibrary::ClearAllTimers(UObject* WorldContextObject) {
}

float UGGBlueprintFunctionLibrary::ClampedNormalizeToRange(float Value, float RangeMin, float RangeMax) {
    return 0.0f;
}

void UGGBlueprintFunctionLibrary::CancelLatentActions(UObject* WorldContextObject) {
}

FRotator UGGBlueprintFunctionLibrary::CalculateSurfaceRotation_K2(FVector SurfaceNormal, const FTransform& ReferenceFrame, bool bReturnInLocalSpace) {
    return FRotator{};
}

float UGGBlueprintFunctionLibrary::CalculateSurfaceAngle_K2(FVector SurfaceNormal, const FTransform& ReferenceFrame, bool bReturnInLocalSpace) {
    return 0.0f;
}

void UGGBlueprintFunctionLibrary::BreakRadarWidgetData(FRadarWidgetData InData, FRadarCoordinateData& Data, UWidget*& Widget) {
}

bool UGGBlueprintFunctionLibrary::ApplyRagdollVelocityChange(TSubclassOf<UGameplayEffect> GameplayEffectClass, AGGGoat* Goat, float Magnitude, FName DataTagName) {
    return false;
}

bool UGGBlueprintFunctionLibrary::ApplyPlayerMSChange(TSubclassOf<UGameplayEffect> GameplayEffectClass, AGGGoat* Goat, float Magnitude, FName DataTagName) {
    return false;
}

float UGGBlueprintFunctionLibrary::ApplyImpulseDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass, FImpulseDamageEvent DamageEvent) {
    return 0.0f;
}

void UGGBlueprintFunctionLibrary::ApplyDisgustingStatusOverlap(const UObject* WorldContextObject, AActor* SourceActor, AActor* TargetActor) {
}

float UGGBlueprintFunctionLibrary::AngleBetweenVectors(const FVector& A, const FVector& B) {
    return 0.0f;
}

void UGGBlueprintFunctionLibrary::AddSpringArmTraceIgnoreActor(USpringArmComponent* Target, AActor* Actor) {
}

void UGGBlueprintFunctionLibrary::AddInterfacedObjectToSignificance(UObject* WorldContextObject, UObject* Obj) {
}

void UGGBlueprintFunctionLibrary::AddGenericTickObjectToSignificanceManager(UObject* WorldContextObject, UObject* Obj) {
}


