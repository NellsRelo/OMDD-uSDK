using UnrealBuildTool;

public class VertexAnimationManager : ModuleRules {
    public VertexAnimationManager(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "Niagara",
            "NiagaraAnimNotifies",
        });
    }
}
