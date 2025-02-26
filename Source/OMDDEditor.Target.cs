using UnrealBuildTool;

public class OMDDEditorTarget : TargetRules {
	public OMDDEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"OMD4"
		});
	}
}
