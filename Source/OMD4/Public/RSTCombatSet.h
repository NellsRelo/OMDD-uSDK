#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "RSTAttributeSet.h"
#include "RSTCombatSet.generated.h"

UCLASS(Blueprintable)
class URSTCombatSet : public URSTAttributeSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BaseDamage, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BaseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BaseHeal, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BaseHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BaseShieldHeal, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BaseShieldHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealPercentMaxHealth, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HealPercentMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrimaryCharges, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData PrimaryCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryCharges, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SecondaryCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpecialCharges, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SpecialCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxPrimaryCharges, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxPrimaryCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxSecondaryCharges, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxSecondaryCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxSpecialCharges, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxSpecialCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxPrimaryChargeBonus, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxPrimaryChargeBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryRechargeRate, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SecondaryRechargeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpecialRechargeRate, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SpecialRechargeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeadshotDamageFactor, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HeadshotDamageFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NonHeadshotDamageFactor, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData NonHeadshotDamageFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CriticalHitFactor, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData CriticalHitFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CriticalHitDamageScale, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData CriticalHitDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StatusEffectDurationScale, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData StatusEffectDurationScale;
    
public:
    URSTCombatSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StatusEffectDurationScale(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpecialRechargeRate(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpecialCharges(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondaryRechargeRate(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondaryCharges(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryCharges(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NonHeadshotDamageFactor(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxSpecialCharges(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxSecondaryCharges(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxPrimaryCharges(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxPrimaryChargeBonus(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealPercentMaxHealth(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeadshotDamageFactor(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CriticalHitFactor(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CriticalHitDamageScale(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BaseShieldHeal(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BaseHeal(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BaseDamage(const FGameplayAttributeData& OldValue);
    
};

