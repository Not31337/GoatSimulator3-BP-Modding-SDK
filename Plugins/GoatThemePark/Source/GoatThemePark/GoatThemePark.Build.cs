using UnrealBuildTool;

public class GoatThemePark : ModuleRules {
    public GoatThemePark(ReadOnlyTargetRules Target) : base(Target) {
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
            "Goat2AnimNodes",
            "Niagara",
            "PhysicsCore",
            "UMG",
            "InputCore",
            "GameplayAbilities",
            "GameplayTasks"
        });
    }
}
