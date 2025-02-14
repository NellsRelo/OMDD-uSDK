#include "RSTEditorBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

URSTEditorBlueprintLibrary::URSTEditorBlueprintLibrary() {
}

bool URSTEditorBlueprintLibrary::IsShippingBuild() {
    return false;
}

bool URSTEditorBlueprintLibrary::IsEditTime(UObject* WorldContextObject) {
    return false;
}

bool URSTEditorBlueprintLibrary::IsEditor() {
    return false;
}

EGameplayEffectDurationType URSTEditorBlueprintLibrary::GetGEDurationType(UGameplayEffect* Effect) {
    return EGameplayEffectDurationType::Instant;
}

int32 URSTEditorBlueprintLibrary::GetBuildChangelist() {
    return 0;
}

bool URSTEditorBlueprintLibrary::DoesGameplayEffectContainComponent(TSubclassOf<UGameplayEffect> EffectClass, TSubclassOf<UGameplayEffectComponent> GECompClass) {
    return false;
}


