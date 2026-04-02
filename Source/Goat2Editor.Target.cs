using UnrealBuildTool;

public class Goat2EditorTarget : TargetRules {
	public Goat2EditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Goat2",
			"Goat2AnimNodes",
			"Goat2Mobile",
		});
	}
}
