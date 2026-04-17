using UnrealBuildTool;

public class GearCompetition : ModuleRules {
    public GearCompetition(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CableComponent",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "Goat2",
            "GameplayAbilities",
            "GameplayTasks"
        });
    }
}
