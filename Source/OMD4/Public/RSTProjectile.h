#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RNetworkProxyActor.h"
#include "RSTAbilitySourceInterface.h"
#include "RSTActorPoolInterface.h"
#include "RSTAdditionalGameplayEffectData.h"
#include "RSTTeamAgentInterface.h"
#include "Templates/SubclassOf.h"
#include "RSTProjectile.generated.h"

class AActor;
class ARSTProjectile;
class ARSTProjectileTrail;
class UAbilitySystemComponent;
class UAudioComponent;
class UCurveFloat;
class UGameplayAbility;
class UGameplayEffect;
class UNiagaraSystem;
class UPrimitiveComponent;
class URSTProjectileMovementComponent;
class URSTRangedHitData;
class USceneComponent;
class USoundCue;

UCLASS(Abstract, Blueprintable)
class OMD4_API ARSTProjectile : public ARNetworkProxyActor, public IAbilitySystemInterface, public IRSTTeamAgentInterface, public IRSTAbilitySourceInterface, public IRSTActorPoolInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTProjectileDormancyChanged, ARSTProjectile*, Projectile);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTProjectileMovementComponent* ProjectileMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* InFlightSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* InFlightAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DamageEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTAdditionalGameplayEffectData> AdditionalEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameplayAbility* AbilityCDO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GibChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LaunchedGibChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> AdditionalComboPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DeathImpulseForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HitGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DamageValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HeadshotDamageFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CriticalHitFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CriticalHitDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bApplyInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InterruptScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTRangedHitData* HitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyOnHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartDormant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartSoundWhileDormant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioFadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoGravityOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoGravityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyDamageOnHit;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTProjectileDormancyChanged OnDormancyChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsDormant, meta=(AllowPrivateAccess=true))
    bool bIsDormant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> TaggedMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BouncesAcknowledged, meta=(AllowPrivateAccess=true))
    int32 BouncesAcknowledged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingContinuousDetectionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingContinuousUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateHomingTargetImmediately;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* TrailParticleSystem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSTProjectileTrail* TrailActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldInitializeTrailActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceDamageFalloff;
    
public:
    ARSTProjectile(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StopPlayingLocally();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStartDormant(bool bNewStartDormant);
    
    UFUNCTION(BlueprintCallable)
    void SetPiercePropertyTags(const FGameplayTagContainer& PropertyTags);
    
    UFUNCTION(BlueprintCallable)
    void SetPierceCount(int32 InPierceCount);
    
    UFUNCTION(BlueprintCallable)
    void SetPierceChance(float InPierceChance);
    
    UFUNCTION(BlueprintCallable)
    void SetInterruptScale(float InInterruptScale);
    
    UFUNCTION(BlueprintCallable)
    void SetHitGameplayCue(FGameplayTag InHitGameplayCue, bool bAllowEmpty);
    
    UFUNCTION(BlueprintCallable)
    void SetHitData(const URSTRangedHitData* InHitData);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadshotDamageFactor(float InHeadshotDamageFactor);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityScale(float InGravityScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceDamageFalloff(UCurveFloat* InDistanceDamageFalloff);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageValue(float InDamageValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageEffectClass(TSubclassOf<UGameplayEffect> InDamageEffectClass);
    
    UFUNCTION(BlueprintCallable)
    void SetCriticalHitFactor(float InCriticalHitFactor);
    
    UFUNCTION(BlueprintCallable)
    void SetCriticalHitDamageScale(float InCriticalHitDamageScale);
    
    UFUNCTION(BlueprintCallable)
    void SetContinuousHomingTargetFilter(const FGameplayTagContainer& GameplayTagFilter);
    
    UFUNCTION(BlueprintCallable)
    void SetBounceCount(int32 InBounceCount);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyInterrupt(bool bInApplyInterrupt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SetAdditionalEffectData(const TArray<FRSTAdditionalGameplayEffectData>& InAdditionalEffects);
    
    UFUNCTION(BlueprintCallable)
    void SetAbilityCDO(const UGameplayAbility* InAbilityCDO);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetTargetData(const FGameplayAbilityTargetDataHandle& TargetData, FPredictionKey PredictionKey);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterHomingTarget(USceneComponent* TargetComponent, FName TargetSocket);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDormant();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BouncesAcknowledged();
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintCallable)
    void OnPostGame();
    
    UFUNCTION(BlueprintCallable)
    void OnHomingTargetInvisible(const FGameplayTag InTag, int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void OnHomingTargetDied(AActor* OwningActor, const AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayEffectSpecHandle> MakeEffectSpecs(UAbilitySystemComponent* ASC);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPiercingRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDormant() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetHitGameplayCue(AActor* HitActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBounceCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void FindAndRegisterHomingTarget(const FGameplayTagContainer& GameplayTagFilter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TargetDataSet(const FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StopPlayingLocally();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_ShouldRespondToOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_ShouldRespondToHit(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLifespanExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DormancyChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowedToPierce(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateProjectile(const FVector& Velocity);
    

    // Fix for true pure virtual functions not being implemented
};

