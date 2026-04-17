using UnrealBuildTool;

public class Goat2 : ModuleRules {
    public Goat2(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "CSN_FootIK",
            "CableComponent",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EngineSettings",
            "GFur",
            "GameplayAbilities",
            "GameplayTags",
            "Goat2AnimNodes",
            "GoatPlatformHelpers",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MobileAssetPacks",
            "MovieScene",
            "NavigationSystem",
            "Niagara",
            "OnlineSubsystemUtils",
            "PhysXVehicles",
            "PhysicsCore",
            "PropertyPath",
            "ReplicationGraph",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "UMG",
            "GameplayTasks"
        });
    }
}
