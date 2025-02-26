#include "RSTAbilityTask_TraceDefinedOverlap.h"

URSTAbilityTask_TraceDefinedOverlap::URSTAbilityTask_TraceDefinedOverlap() {
}

URSTAbilityTask_TraceDefinedOverlap* URSTAbilityTask_TraceDefinedOverlap::TraceDefinedOverlap(UGameplayAbility* OwningAbility, FRSTAbilityCollisionSpecHandle Spec, FVector Location, FRotator Rotation, const TArray<AActor*>& ActorsToIgnore, AActor* AttachToActor, FLinearColor TraceColor, bool bIgnoreSelf, bool bDebugDraw) {
    return NULL;
}

URSTAbilityTask_TraceDefinedOverlap* URSTAbilityTask_TraceDefinedOverlap::SweepDefinedOverlap(UGameplayAbility* OwningAbility, FRSTAbilityCollisionSpecHandle Spec, FVector Start, FVector End, FRotator Rotation, const TArray<AActor*>& ActorsToIgnore, FLinearColor TraceColor, bool bIgnoreSelf, bool bDebugDraw) {
    return NULL;
}

FGameplayAbilityTargetDataHandle URSTAbilityTask_TraceDefinedOverlap::GetAllCurrentActors() const {
    return FGameplayAbilityTargetDataHandle{};
}


