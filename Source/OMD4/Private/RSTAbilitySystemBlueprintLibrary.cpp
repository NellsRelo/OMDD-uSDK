#include "RSTAbilitySystemBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

URSTAbilitySystemBlueprintLibrary::URSTAbilitySystemBlueprintLibrary() {
}

void URSTAbilitySystemBlueprintLibrary::TraceSphere(UGameplayAbility* OwningAbility, FVector SourceLocation, float Radius, FCollisionProfileName CollisionProfile, const TArray<AActor*>& IgnoreActors, bool bIgnoreSelf, bool bTraceLineOfSight, FCollisionProfileName LineOfSightProfile, float LineOfSightHitTolerance, TArray<AActor*>& OutOverlappedActors, bool bDebugDraw, float DebugDrawLifetime) {
}

void URSTAbilitySystemBlueprintLibrary::TraceForwardArc(UGameplayAbility* OwningAbility, FVector SourceLocation, FVector SourceForward, FVector SourceUp, float Radius, float Angle, float InitialRadius, FCollisionProfileName CollisionProfile, const TArray<AActor*>& IgnoreActors, bool bIgnoreSelf, bool bTraceLineOfSight, FCollisionProfileName LineOfSightProfile, TArray<AActor*>& OutOverlappedActors, bool bDebugDraw, float DebugDrawLifetime) {
}

bool URSTAbilitySystemBlueprintLibrary::ShouldPreventHitFromFriendlyFire(const AActor* Target, const FGameplayEffectSpec& Spec) {
    return false;
}

FGameplayEffectSpecHandle URSTAbilitySystemBlueprintLibrary::SetSetByCallerValues(FGameplayEffectSpecHandle SpecHandle, TMap<FGameplayTag, float> SetByCallerValues) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle URSTAbilitySystemBlueprintLibrary::SetInterruptScale(FGameplayEffectSpecHandle SpecHandle, float InterruptScale) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle URSTAbilitySystemBlueprintLibrary::SetEffectPeriod(FGameplayEffectSpecHandle SpecHandle, float Period) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle URSTAbilitySystemBlueprintLibrary::SetEffectKnockbackData(FGameplayEffectSpecHandle SpecHandle, const URSTKnockbackData* KnockbackData) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle URSTAbilitySystemBlueprintLibrary::SetEffectGibChance(FGameplayEffectSpecHandle SpecHandle, float GibChance) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle URSTAbilitySystemBlueprintLibrary::SetEffectDamage(FGameplayEffectSpecHandle SpecHandle, float Damage) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectContextHandle URSTAbilitySystemBlueprintLibrary::SetEffectContextInstigator(FGameplayEffectContextHandle Context, AActor* NewInstigator) {
    return FGameplayEffectContextHandle{};
}

FGameplayEffectContextHandle URSTAbilitySystemBlueprintLibrary::SetEffectContextEffectCauser(FGameplayEffectContextHandle Context, AActor* NewEffectCauser) {
    return FGameplayEffectContextHandle{};
}

FGameplayEffectContextHandle URSTAbilitySystemBlueprintLibrary::SetEffectContextDeathImpulse(FGameplayEffectContextHandle InContext, float DeathImpulse) {
    return FGameplayEffectContextHandle{};
}

FGameplayEffectContextHandle URSTAbilitySystemBlueprintLibrary::SetEffectContextAdditionalComboPoints(FGameplayEffectContextHandle InContext, const TMap<FGameplayTag, float>& AdditionalComboPoints) {
    return FGameplayEffectContextHandle{};
}

FGameplayEffectSpecHandle URSTAbilitySystemBlueprintLibrary::SetApplyInterrupt(FGameplayEffectSpecHandle SpecHandle, bool bApplyInterrupt) {
    return FGameplayEffectSpecHandle{};
}

void URSTAbilitySystemBlueprintLibrary::RemoveEffectsFromTarget(UAbilitySystemComponent* TargetASC, UAbilitySystemComponent* SourceASC, const TArray<FRSTAdditionalGameplayEffectData>& AdditionalData) {
}

bool URSTAbilitySystemBlueprintLibrary::RemoveAndInvalidateOpacity(FRSTActorOpacityHandle& Handle, bool bInstant) {
    return false;
}

bool URSTAbilitySystemBlueprintLibrary::RemoveAndInvalidateAttachment(FRSTAttachmentTransactionHandle& AttachmentHandle) {
    return false;
}

bool URSTAbilitySystemBlueprintLibrary::RemoveAndInvalidateAnimLayer(FRSTAnimLayerHandle& Handle) {
    return false;
}

bool URSTAbilitySystemBlueprintLibrary::RemoveAndInvalidate(FRSTLooseTagHandle& LooseTagHandle) {
    return false;
}

FGameplayAbilityTargetDataHandle URSTAbilitySystemBlueprintLibrary::MakeTargetDataForActor(AActor* Actor) {
    return FGameplayAbilityTargetDataHandle{};
}

bool URSTAbilitySystemBlueprintLibrary::IsValidSpec(const FGameplayAbilitySpecHandle& Spec) {
    return false;
}

bool URSTAbilitySystemBlueprintLibrary::IsTagHandleValid(const FRSTLooseTagHandle& LooseTagHandle) {
    return false;
}

bool URSTAbilitySystemBlueprintLibrary::IsPointOnNavMeshForClass(UObject* WorldContextObject, const FVector& Location, TSubclassOf<AActor> ActorClass, float Threshold, bool bExtendUp) {
    return false;
}

bool URSTAbilitySystemBlueprintLibrary::IsPointOnNavMeshForActor(UObject* WorldContextObject, const FVector& Location, AActor* Actor, float Threshold, bool bExtendUp) {
    return false;
}

bool URSTAbilitySystemBlueprintLibrary::IsPointOnNavMesh(UObject* WorldContextObject, const FVector& Location, float Threshold, bool bExtendUp) {
    return false;
}

bool URSTAbilitySystemBlueprintLibrary::IsEffectHandleValid(const FActiveGameplayEffectHandle& Handle) {
    return false;
}

bool URSTAbilitySystemBlueprintLibrary::IsAnimLayerHandleValid(const FRSTAnimLayerHandle& Handle) {
    return false;
}

UWorld* URSTAbilitySystemBlueprintLibrary::GetWorldFromGameplayEffectSpec(const FGameplayEffectSpec& Spec) {
    return NULL;
}

TEnumAsByte<ETeamAttitude::Type> URSTAbilitySystemBlueprintLibrary::GetTeamAttitudeTowards(AActor* Instigator, AActor* Target) {
    return ETeamAttitude::Friendly;
}

ARSTPlayerState* URSTAbilitySystemBlueprintLibrary::GetSourcePlayerStateFromGameplayEffectSpec(const FGameplayEffectSpec& Spec) {
    return NULL;
}

bool URSTAbilitySystemBlueprintLibrary::GetPredictiveAimingLocationWithTarget(const AActor* TargetActor, const FVector& SourceLocation, float Speed, const FVector& CurrentTargetLocation, FVector& OutTargetLocation) {
    return false;
}

bool URSTAbilitySystemBlueprintLibrary::GetPredictiveAimingLocationForComponent(const USceneComponent* TargetComponent, const FVector& SourceLocation, float Speed, FVector& OutTargetLocation) {
    return false;
}

bool URSTAbilitySystemBlueprintLibrary::GetPredictiveAimingLocation(const AActor* TargetActor, const FVector& SourceLocation, float Speed, FVector& OutTargetLocation) {
    return false;
}

ARSTOnslaughtCoordinator* URSTAbilitySystemBlueprintLibrary::GetOnslaughtCoordinator() {
    return NULL;
}

ANavPowerNavigationData* URSTAbilitySystemBlueprintLibrary::GetNavigationDataForClass(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

ANavPowerNavigationData* URSTAbilitySystemBlueprintLibrary::GetNavigationDataForActor(UObject* WorldContextObject, AActor* Actor) {
    return NULL;
}

ARSTGameStateBase* URSTAbilitySystemBlueprintLibrary::GetGameStateFromGameplayEffectSpec(const FGameplayEffectSpec& Spec) {
    return NULL;
}

FGameplayTagContainer URSTAbilitySystemBlueprintLibrary::GetGameplayEffectSpecTags(const FGameplayEffectSpec& Spec) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer URSTAbilitySystemBlueprintLibrary::GetGameplayEffectSpecCapturedSourceTags(const FGameplayEffectSpec& Spec) {
    return FGameplayTagContainer{};
}

bool URSTAbilitySystemBlueprintLibrary::GetAnimNotifyTime(const UAnimMontage* Montage, FGameplayTag Tag, float& OutTime, bool bMatchExact, bool bApplyRateScale) {
    return false;
}

bool URSTAbilitySystemBlueprintLibrary::GetAnimNotifyStateTimes(const UAnimMontage* Montage, FGameplayTag Tag, float& OutStart, float& OutEnd, bool bMatchExact, bool bApplyRateScale) {
    return false;
}

void URSTAbilitySystemBlueprintLibrary::GetAbilityTags(const UGameplayAbility* Ability, FGameplayTagContainer& OutTags) {
}

FGameplayAbilityTargetDataHandle URSTAbilitySystemBlueprintLibrary::GatherAOETargetsByObjectType(UObject* WorldContextObject, FVector Location, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, const TArray<AActor*>& IgnoreActors, UAbilitySystemComponent* Source, const URSTAbilitySystemBlueprintLibrary::FRSTAOECheckDynamic& CheckFunc) {
    return FGameplayAbilityTargetDataHandle{};
}

FGameplayAbilityTargetDataHandle URSTAbilitySystemBlueprintLibrary::GatherAOETargets(UObject* WorldContextObject, FVector Location, float Radius, FCollisionProfileName CollisionProfile, const TArray<AActor*>& IgnoreActors, UAbilitySystemComponent* Source, const URSTAbilitySystemBlueprintLibrary::FRSTAOECheckDynamic& CheckFunc) {
    return FGameplayAbilityTargetDataHandle{};
}

void URSTAbilitySystemBlueprintLibrary::EnsureAbilityTagsPresent(UGameplayAbility* Ability, FGameplayTagContainer Tags) {
}

bool URSTAbilitySystemBlueprintLibrary::DoesGameplayEffectSpecContainTag(const FGameplayEffectSpec& Spec, FGameplayTag Tag) {
    return false;
}

void URSTAbilitySystemBlueprintLibrary::DeferDeath(const TArray<AActor*>& AffectedActors, bool bNewIsDeferringDeath) {
}

void URSTAbilitySystemBlueprintLibrary::Debug_FireProjectile(UObject* WorldContextObject, TSubclassOf<ARSTProjectile> ProjectileClass, FVector Location, FVector Velocity) {
}

TArray<FGameplayEffectSpecHandle> URSTAbilitySystemBlueprintLibrary::CreateSpecHandlesForAdditionalEffects(UAbilitySystemComponent* ASC, const TArray<FRSTAdditionalGameplayEffectData>& AdditionalData, const URSTGameplayAbility* OptionalSourceAbility, const TMap<FGameplayTag, float>& SetByCallerOverrides) {
    return TArray<FGameplayEffectSpecHandle>();
}

FGameplayEffectContextHandle URSTAbilitySystemBlueprintLibrary::ClearEffectContextHitResult(FGameplayEffectContextHandle InContext, bool bResetOrigin) {
    return FGameplayEffectContextHandle{};
}

void URSTAbilitySystemBlueprintLibrary::ApplyGameplayEffectSpecToTargetData(UAbilitySystemComponent* ASC, const FGameplayAbilityTargetDataHandle& Handle, const FGameplayEffectSpecHandle& Spec, TArray<FActiveGameplayEffectHandle>& OutAppliedHandles) {
}

void URSTAbilitySystemBlueprintLibrary::ApplyAOEEffect(UObject* WorldContextObject, AActor* SourceObject, FVector Location, float Radius, FCollisionProfileName CollisionProfile, const TArray<AActor*>& IgnoreActors, UAbilitySystemComponent* Source, TSubclassOf<UGameplayEffect> Effect, float Damage, const TMap<FGameplayTag, float>& SetByCallerValues, const URSTAbilitySystemBlueprintLibrary::FRSTAOECheckDynamic& CheckFunc, float DeathImpulseForce) {
}

void URSTAbilitySystemBlueprintLibrary::ApplyAdditionalEffectsToTarget(UAbilitySystemComponent* ASC, const TArray<FRSTAdditionalGameplayEffectData>& AdditionalData, const FGameplayAbilityTargetDataHandle& Handle, const URSTGameplayAbility* OptionalSourceAbility, const TMap<FGameplayTag, float>& SetByCallerOverrides, TArray<FActiveGameplayEffectHandle>& OutAppliedHandles) {
}


