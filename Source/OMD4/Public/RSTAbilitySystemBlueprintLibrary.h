#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTActorOpacityHandle.h"
#include "RSTAdditionalGameplayEffectData.h"
#include "RSTAnimLayerHandle.h"
#include "RSTAttachmentTransactionHandle.h"
#include "RSTLooseTagHandle.h"
#include "Templates/SubclassOf.h"
#include "RSTAbilitySystemBlueprintLibrary.generated.h"

class AActor;
class ANavPowerNavigationData;
class ARSTGameStateBase;
class ARSTOnslaughtCoordinator;
class ARSTPlayerState;
class ARSTProjectile;
class UAbilitySystemComponent;
class UAnimMontage;
class UGameplayAbility;
class UGameplayEffect;
class UObject;
class URSTGameplayAbility;
class URSTKnockbackData;
class USceneComponent;
class UWorld;

UCLASS(Blueprintable)
class OMD4_API URSTAbilitySystemBlueprintLibrary : public UAbilitySystemBlueprintLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FRSTAOECheckDynamic, UAbilitySystemComponent*, Source, AActor*, Target);
    
    URSTAbilitySystemBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void TraceSphere(UGameplayAbility* OwningAbility, FVector SourceLocation, float Radius, FCollisionProfileName CollisionProfile, const TArray<AActor*>& IgnoreActors, bool bIgnoreSelf, bool bTraceLineOfSight, FCollisionProfileName LineOfSightProfile, float LineOfSightHitTolerance, TArray<AActor*>& OutOverlappedActors, bool bDebugDraw, float DebugDrawLifetime);
    
    UFUNCTION(BlueprintCallable)
    static void TraceForwardArc(UGameplayAbility* OwningAbility, FVector SourceLocation, FVector SourceForward, FVector SourceUp, float Radius, float Angle, float InitialRadius, FCollisionProfileName CollisionProfile, const TArray<AActor*>& IgnoreActors, bool bIgnoreSelf, bool bTraceLineOfSight, FCollisionProfileName LineOfSightProfile, TArray<AActor*>& OutOverlappedActors, bool bDebugDraw, float DebugDrawLifetime);
    
    UFUNCTION(BlueprintCallable)
    static bool ShouldPreventHitFromFriendlyFire(const AActor* Target, const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetSetByCallerValues(FGameplayEffectSpecHandle SpecHandle, TMap<FGameplayTag, float> SetByCallerValues);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetInterruptScale(FGameplayEffectSpecHandle SpecHandle, float InterruptScale);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetEffectPeriod(FGameplayEffectSpecHandle SpecHandle, float Period);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetEffectKnockbackData(FGameplayEffectSpecHandle SpecHandle, const URSTKnockbackData* KnockbackData);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetEffectGibChance(FGameplayEffectSpecHandle SpecHandle, float GibChance);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetEffectDamage(FGameplayEffectSpecHandle SpecHandle, float Damage);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectContextHandle SetEffectContextInstigator(FGameplayEffectContextHandle Context, AActor* NewInstigator);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectContextHandle SetEffectContextEffectCauser(FGameplayEffectContextHandle Context, AActor* NewEffectCauser);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectContextHandle SetEffectContextDeathImpulse(FGameplayEffectContextHandle InContext, float DeathImpulse);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectContextHandle SetEffectContextAdditionalComboPoints(FGameplayEffectContextHandle InContext, const TMap<FGameplayTag, float>& AdditionalComboPoints);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle SetApplyInterrupt(FGameplayEffectSpecHandle SpecHandle, bool bApplyInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveEffectsFromTarget(UAbilitySystemComponent* TargetASC, UAbilitySystemComponent* SourceASC, const TArray<FRSTAdditionalGameplayEffectData>& AdditionalData);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveAndInvalidateOpacity(UPARAM(Ref) FRSTActorOpacityHandle& Handle, bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveAndInvalidateAttachment(UPARAM(Ref) FRSTAttachmentTransactionHandle& AttachmentHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveAndInvalidateAnimLayer(UPARAM(Ref) FRSTAnimLayerHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveAndInvalidate(UPARAM(Ref) FRSTLooseTagHandle& LooseTagHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAbilityTargetDataHandle MakeTargetDataForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidSpec(const FGameplayAbilitySpecHandle& Spec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTagHandleValid(const FRSTLooseTagHandle& LooseTagHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPointOnNavMeshForClass(UObject* WorldContextObject, const FVector& Location, TSubclassOf<AActor> ActorClass, float Threshold, bool bExtendUp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPointOnNavMeshForActor(UObject* WorldContextObject, const FVector& Location, AActor* Actor, float Threshold, bool bExtendUp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPointOnNavMesh(UObject* WorldContextObject, const FVector& Location, float Threshold, bool bExtendUp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEffectHandleValid(const FActiveGameplayEffectHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnimLayerHandleValid(const FRSTAnimLayerHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorld* GetWorldFromGameplayEffectSpec(const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ETeamAttitude::Type> GetTeamAttitudeTowards(AActor* Instigator, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARSTPlayerState* GetSourcePlayerStateFromGameplayEffectSpec(const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPredictiveAimingLocationWithTarget(const AActor* TargetActor, const FVector& SourceLocation, float Speed, const FVector& CurrentTargetLocation, FVector& OutTargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPredictiveAimingLocationForComponent(const USceneComponent* TargetComponent, const FVector& SourceLocation, float Speed, FVector& OutTargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPredictiveAimingLocation(const AActor* TargetActor, const FVector& SourceLocation, float Speed, FVector& OutTargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARSTOnslaughtCoordinator* GetOnslaughtCoordinator();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ANavPowerNavigationData* GetNavigationDataForClass(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ANavPowerNavigationData* GetNavigationDataForActor(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARSTGameStateBase* GetGameStateFromGameplayEffectSpec(const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetGameplayEffectSpecTags(const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetGameplayEffectSpecCapturedSourceTags(const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAnimNotifyTime(const UAnimMontage* Montage, FGameplayTag Tag, float& OutTime, bool bMatchExact, bool bApplyRateScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAnimNotifyStateTimes(const UAnimMontage* Montage, FGameplayTag Tag, float& OutStart, float& OutEnd, bool bMatchExact, bool bApplyRateScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAbilityTags(const UGameplayAbility* Ability, FGameplayTagContainer& OutTags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGameplayAbilityTargetDataHandle GatherAOETargetsByObjectType(UObject* WorldContextObject, FVector Location, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, const TArray<AActor*>& IgnoreActors, UAbilitySystemComponent* Source, const URSTAbilitySystemBlueprintLibrary::FRSTAOECheckDynamic& CheckFunc);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGameplayAbilityTargetDataHandle GatherAOETargets(UObject* WorldContextObject, FVector Location, float Radius, FCollisionProfileName CollisionProfile, const TArray<AActor*>& IgnoreActors, UAbilitySystemComponent* Source, const URSTAbilitySystemBlueprintLibrary::FRSTAOECheckDynamic& CheckFunc);
    
    UFUNCTION(BlueprintCallable)
    static void EnsureAbilityTagsPresent(UGameplayAbility* Ability, FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesGameplayEffectSpecContainTag(const FGameplayEffectSpec& Spec, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    static void DeferDeath(const TArray<AActor*>& AffectedActors, bool bNewIsDeferringDeath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Debug_FireProjectile(UObject* WorldContextObject, TSubclassOf<ARSTProjectile> ProjectileClass, FVector Location, FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayEffectSpecHandle> CreateSpecHandlesForAdditionalEffects(UAbilitySystemComponent* ASC, const TArray<FRSTAdditionalGameplayEffectData>& AdditionalData, const URSTGameplayAbility* OptionalSourceAbility, const TMap<FGameplayTag, float>& SetByCallerOverrides);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectContextHandle ClearEffectContextHitResult(FGameplayEffectContextHandle InContext, bool bResetOrigin);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyGameplayEffectSpecToTargetData(UAbilitySystemComponent* ASC, const FGameplayAbilityTargetDataHandle& Handle, const FGameplayEffectSpecHandle& Spec, TArray<FActiveGameplayEffectHandle>& OutAppliedHandles);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplyAOEEffect(UObject* WorldContextObject, AActor* SourceObject, FVector Location, float Radius, FCollisionProfileName CollisionProfile, const TArray<AActor*>& IgnoreActors, UAbilitySystemComponent* Source, TSubclassOf<UGameplayEffect> Effect, float Damage, const TMap<FGameplayTag, float>& SetByCallerValues, const URSTAbilitySystemBlueprintLibrary::FRSTAOECheckDynamic& CheckFunc, float DeathImpulseForce);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAdditionalEffectsToTarget(UAbilitySystemComponent* ASC, const TArray<FRSTAdditionalGameplayEffectData>& AdditionalData, const FGameplayAbilityTargetDataHandle& Handle, const URSTGameplayAbility* OptionalSourceAbility, const TMap<FGameplayTag, float>& SetByCallerOverrides, TArray<FActiveGameplayEffectHandle>& OutAppliedHandles);
    
};

