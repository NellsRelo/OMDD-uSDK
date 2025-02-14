#include "RSTAbilityTask_TraceLineOfSight.h"

URSTAbilityTask_TraceLineOfSight::URSTAbilityTask_TraceLineOfSight() {
}

URSTAbilityTask_TraceLineOfSight* URSTAbilityTask_TraceLineOfSight::TraceLineOfSight_Dynamic(UGameplayAbility* OwningAbility, FRSTTraceLineOfSightActorsDelegate ActorsDelegate, FRSTTraceLineOfSightTransformDelegate TransformDelegate, FCollisionProfileName TraceProfile, bool bIgnoreSelf, const TArray<AActor*>& IgnoreActors, float MoveRecheckThreshold, float MinConsiderRadius, float HitTolerance, bool bRunTraceInstantly, float ScanRate, bool bShowDebug) {
    return NULL;
}

URSTAbilityTask_TraceLineOfSight* URSTAbilityTask_TraceLineOfSight::TraceLineOfSight(UGameplayAbility* OwningAbility, FRSTTraceLineOfSightActorsDelegate ActorsDelegate, FTransform Transform, FCollisionProfileName TraceProfile, bool bIgnoreSelf, const TArray<AActor*>& IgnoreActors, float MoveRecheckThreshold, float MinConsiderRadius, float HitTolerance, bool bRunTraceInstantly, float ScanRate, bool bShowDebug) {
    return NULL;
}

TArray<AActor*> URSTAbilityTask_TraceLineOfSight::GetCurrentLineOfSightActors() const {
    return TArray<AActor*>();
}

void URSTAbilityTask_TraceLineOfSight::CheckLineOfSight() {
}


