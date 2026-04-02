using UnrealBuildTool;

public class GoatApocalypse : ModuleRules {
    public GoatApocalypse(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "CableComponent",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "Goat2",
            "Goat2Mobile",
            "GoatPlatformHelpers",
            "Landscape",
            "Niagara",
            "PhysXVehicles",
            "PhysicsCore",
            "SlateCore",
            "UMG",

            "GameplayAbilities",
            "GameplayTasks",
            "InputCore"
        });
    }
}
