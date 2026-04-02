using UnrealBuildTool;

public class GearPack_Future : ModuleRules {
    public GearPack_Future(ReadOnlyTargetRules Target) : base(Target) {
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

            "GameplayAbilities",
            "GameplayTasks"
        });
    }
}
