#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayTagPair -FallbackName=GameplayTagPair
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERSTRangedAimMode.h"
#include "ERSTRangedFireGroupTargetingMethod.h"
#include "RSTFloatRange.h"
#include "RSTGameplayAbility_CombatBase.h"
#include "RSTProjectileFiringParameters.h"
#include "RSTRange.h"
#include "RSTRangedCombatAbilityInterface.h"
#include "Templates/SubclassOf.h"
#include "RSTGameplayAbility_RangedWeapon.generated.h"

class AActor;
class ARSTProjectile;
class UAbilityTask_PlayMontageAndWait;
class UAnimMontage;
class UCurveFloat;
class UCurveVector;
class UGameplayEffect;
class URSTRangedHitData;

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTGameplayAbility_RangedWeapon : public URSTGameplayAbility_CombatBase, public IRSTRangedCombatAbilityInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTRange AbilityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayAbilityCommit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MontageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoPredictiveAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FireCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MisfireCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerformRangedTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TargetingGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTRangedFireGroupTargetingMethod TargetingMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAimTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideAimTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTRangedAimMode AimMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFavorHighArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bXYVelocityOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileLaunchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredArcRelativeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceFixedHeight;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> AttackMontages;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* MontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideProjectileGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverrideProjectileHitGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadshotDamageFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PierceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PierceChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PiercePropertyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BounceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> HomingTargetFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTRangedHitData* ProjectileHitDataPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTRangedHitData* ProjectileHitDataElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAvatarInstigatorAsProjectileInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AimingSpeedModifierEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AimingSpeedModifierRemovalEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverrideBloomIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpreadHorizontalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpreadVerticalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadHorizontalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBloom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHorizontalBloom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalBloom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloomIncrementPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloomRecoveryMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloomRecoveryDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* RecoilCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RecoilRecoveryCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTFloatRange HorizontalRecoilScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTFloatRange VerticalRecoilScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilRecoveryDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilRecoveryDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHorizontalRecoilExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalRecoilExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSameHorizontalDirectionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSameVerticalDirectionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HorizontalDirectionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VerticalDirectionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceDamageFalloff;
    
public:
    URSTGameplayAbility_RangedWeapon();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryOverrideTargetLocation(FVector FireLocation, FVector& OutTargetLocation) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void StartFiringSequence();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ProcessFireProjectile(FPredictionKey PredictionKey, const FGameplayTag& FirePointIdentifier, const TArray<FRSTProjectileFiringParameters>& FireData);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageCancelled();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendOut();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetedActorLocation(const FVector& Source, FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetedActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProjectileSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    bool GetProjectileLaunchParameters(FGameplayTag FirePointIdentifier, const float AnimationTime, TArray<FRSTProjectileFiringParameters>& OutFireData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProjectileGravityScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ARSTProjectile> GetPrimaryProjectileClass() const;

    // TODO: Determine how to get GameplayTagPair imported
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    //TArray<FGameplayTagPair> GetFireCueTagParameters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FRSTProjectileFiringParameters> BP_ModifyFireData(const TArray<FRSTProjectileFiringParameters>& InOutFireData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MisfireAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializeProjectile(ARSTProjectile* Projectile);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<ARSTProjectile> BP_GetProjectileClass(const FGameplayTag& FirePoint, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FireProjectile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FireMontageStarted();
    

    // Fix for true pure virtual functions not being implemented
};

