#include "RSTAbilityTask_SphereOverlap.h"

URSTAbilityTask_SphereOverlap::URSTAbilityTask_SphereOverlap() {
}

URSTAbilityTask_SphereOverlap* URSTAbilityTask_SphereOverlap::WaitForSphereOverlap_Dynamic(UGameplayAbility* OwningAbility, float UnscaledRadius, FRSTSphereOverlapTransformDelegate StartTransformDelegate, FRSTSphereOverlapTransformDelegate EndTransformDelegate, FCollisionProfileName TraceProfile, const TArray<AActor*>& InitialOverlaps, const TArray<AActor*>& IgnoreActors, bool bRunTraceInstantly, float ScanRate, bool bShowDebug) {
    return NULL;
}

URSTAbilityTask_SphereOverlap* URSTAbilityTask_SphereOverlap::WaitForSphereOverlap_Delegate_Dynamic(UGameplayAbility* OwningAbility, FRSTSphereOverlapRadiusDelegate RadiusDelegate, FRSTSphereOverlapTransformDelegate StartTransformDelegate, FRSTSphereOverlapTransformDelegate EndTransformDelegate, FCollisionProfileName TraceProfile, const TArray<AActor*>& InitialOverlaps, const TArray<AActor*>& IgnoreActors, bool bRunTraceInstantly, float ScanRate, bool bShowDebug) {
    return NULL;
}

URSTAbilityTask_SphereOverlap* URSTAbilityTask_SphereOverlap::WaitForSphereOverlap_Delegate(UGameplayAbility* OwningAbility, FRSTSphereOverlapRadiusDelegate RadiusDelegate, FTransform StartTransform, FTransform EndTransform, FCollisionProfileName TraceProfile, const TArray<AActor*>& InitialOverlaps, const TArray<AActor*>& IgnoreActors, bool bRunTraceInstantly, float ScanRate, bool bShowDebug) {
    return NULL;
}

URSTAbilityTask_SphereOverlap* URSTAbilityTask_SphereOverlap::WaitForSphereOverlap_AttributeRadius_Dynamic(UGameplayAbility* OwningAbility, FGameplayAttribute RadiusAttribute, FRSTSphereOverlapTransformDelegate StartTransformDelegate, FRSTSphereOverlapTransformDelegate EndTransformDelegate, FCollisionProfileName TraceProfile, const TArray<AActor*>& InitialOverlaps, const TArray<AActor*>& IgnoreActors, bool bRunTraceInstantly, float ScanRate, bool bShowDebug) {
    return NULL;
}

URSTAbilityTask_SphereOverlap* URSTAbilityTask_SphereOverlap::WaitForSphereOverlap_AttributeRadius(UGameplayAbility* OwningAbility, FGameplayAttribute RadiusAttribute, FTransform StartTransform, FTransform EndTransform, FCollisionProfileName TraceProfile, const TArray<AActor*>& InitialOverlaps, const TArray<AActor*>& IgnoreActors, bool bRunTraceInstantly, float ScanRate, bool bShowDebug) {
    return NULL;
}

URSTAbilityTask_SphereOverlap* URSTAbilityTask_SphereOverlap::WaitForSphereOverlap(UGameplayAbility* OwningAbility, float UnscaledRadius, FTransform StartTransform, FTransform EndTransform, FCollisionProfileName TraceProfile, const TArray<AActor*>& InitialOverlaps, const TArray<AActor*>& IgnoreActors, bool bRunTraceInstantly, float ScanRate, bool bShowDebug) {
    return NULL;
}

TArray<AActor*> URSTAbilityTask_SphereOverlap::GetCurrentOverlaps() {
    return TArray<AActor*>();
}


