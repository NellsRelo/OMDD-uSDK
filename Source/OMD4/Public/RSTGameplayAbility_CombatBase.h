#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERSTInvalidTargetReason.h"
#include "RSTAdditionalGameplayEffectData.h"
#include "RSTGameplayAbility.h"
#include "RSTRange.h"
#include "Templates/SubclassOf.h"
#include "RSTGameplayAbility_CombatBase.generated.h"

class AActor;
class ARSTAICharacter;
class ARSTAIController;
class ARSTCharacter;
class UGameplayEffect;
class URSTAbilitySystemComponent;
class URSTAbilityTask_TrackCharacterInput;
class URSTTargetingData;

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTGameplayAbility_CombatBase : public URSTGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCloseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasIgnoredLookInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsMoveCancelling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveCancelThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTAbilityTask_TrackCharacterInput* MoveCancelTaskHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DamageEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAdditionalGameplayEffectData> AdditionalEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HitGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirborneDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalHitFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalHitDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> AdditionalComboPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GibChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchedGibChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathImpulseForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterruptScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTTargetingData* TargetingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopMovementOnActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectOnCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSTAICharacter* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSTCharacter* AITarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSTAIController* AIOwnerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AIASC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AITargetASC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimSlowScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasAppliedAimSlowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AbilityInputDeferralTags;
    
public:
    URSTGameplayAbility_CombatBase();

protected:
    UFUNCTION(BlueprintCallable)
    void UnlockAiming();
    
    UFUNCTION(BlueprintCallable)
    void SetAimSpeedScale(float Scale);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SelectOnCooldown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OrientToTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveCancelInputDetected(FVector LastInput);
    
    UFUNCTION(BlueprintCallable)
    void LockAiming();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidTarget(AActor* SourceActor, AActor* TargetActor, bool bIsBlockedToRift, float& OutThreatAdj, ERSTInvalidTargetReason& OutInvalidReason);
    
    UFUNCTION(BlueprintCallable)
    bool IsRanged();
    
    UFUNCTION(BlueprintCallable)
    bool InitAIVariables(bool bIncludeTarget);
    
    UFUNCTION(BlueprintCallable)
    void GetRange(FRSTRange& OutRange);
    
    UFUNCTION(BlueprintCallable)
    float GetCloseDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAIWeight();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearAimSlowing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_IsRanged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_GetRange(FRSTRange& OutRange);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ApplyDamageEffectToTarget(FGameplayAbilityTargetDataHandle TargetHandle);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyDamageEffect(URSTAbilitySystemComponent* TargetASC, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyAimSlowing();
    
};

