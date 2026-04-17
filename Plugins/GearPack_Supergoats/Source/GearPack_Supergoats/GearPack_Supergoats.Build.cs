using UnrealBuildTool;

public class GearPack_Supergoats : ModuleRules {
    public GearPack_Supergoats(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "Goat2",
            "Niagara",
            "PhysicsCore",
            "UMG",
            "GameplayAbilities",
            "GameplayTasks"
        });
    }
}
