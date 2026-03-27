using UnrealBuildTool;

public class GoatApril2025 : ModuleRules {
    public GoatApril2025(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "Goat2",
            "GameplayAbilities",
            "GameplayTasks",
        });
    }
}
