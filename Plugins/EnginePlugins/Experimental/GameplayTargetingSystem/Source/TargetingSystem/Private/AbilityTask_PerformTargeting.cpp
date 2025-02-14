#include "AbilityTask_PerformTargeting.h"

UAbilityTask_PerformTargeting::UAbilityTask_PerformTargeting() {
}

UAbilityTask_PerformTargeting* UAbilityTask_PerformTargeting::PerformTargetingRequest(UGameplayAbility* OwningAbility, UTargetingPreset* InTargetingPreset, bool bAllowAsync) {
    return NULL;
}

UAbilityTask_PerformTargeting* UAbilityTask_PerformTargeting::PerformFilteringRequest(UGameplayAbility* OwningAbility, UTargetingPreset* TargetingPreset, const TArray<AActor*> InTargets, bool bAllowAsync) {
    return NULL;
}


