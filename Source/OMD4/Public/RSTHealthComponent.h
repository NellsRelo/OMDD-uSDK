#pragma once
#include "CoreMinimal.h"
#include "Components/GameFrameworkComponent.h"
#include "ERSTDeathState.h"
#include "RSTDownedData.h"
#include "RSTHealth_AttributeChangedDelegate.h"
#include "RSTHealth_DamageDelegateDelegate.h"
#include "RSTHealth_DeathEventDelegate.h"
#include "RSTHealth_HealingDelegateDelegate.h"
#include "RSTHealth_OnDisplayChangedDelegate.h"
#include "RSTReviveData.h"
#include "RSTHealthComponent.generated.h"

class AActor;
class URSTAbilitySystemComponent;
class URSTDeathEvent;
class URSTHealthComponent;
class URSTHealthSet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTHealthComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTHealthComponentReviveDataUpdated, FRSTReviveData, ReviveData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_DamageDelegate OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_HealingDelegate OnHealingTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_AttributeChanged OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_AttributeChanged OnMaxHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_AttributeChanged OnShieldChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_AttributeChanged OnMaxShieldChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_DeathEvent OnDowned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_DeathEvent OnDownedDeathTimePauseChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_DeathEvent OnDownedDeathTimeComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_DeathEvent OnRevived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_DeathEvent OnDeathStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_DeathEvent OnDeathFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTHealthSet* HealthSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTDeathState DeathState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastDeathEvent, meta=(AllowPrivateAccess=true))
    URSTDeathEvent* LastDeathEvent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealth_OnDisplayChanged OnDisplayChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReviveData, meta=(AllowPrivateAccess=true))
    FRSTReviveData ReviveData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTHealthComponentReviveDataUpdated OnReviveDataUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRSTDownedData DownedData;
    
public:
    URSTHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UninitializeFromAbilitySystem();
    
    UFUNCTION(BlueprintCallable)
    void ReviveFromDowned(float ReviverMultiplier, const AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void ProcessDownedDeathTimeComplete();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReviveData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastDeathEvent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReviveInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsDowned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsDeadOrDying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsDamageFatal(float Damage) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeWithAbilitySystem(URSTAbilitySystemComponent* InASC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShieldNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRevivingAllyStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTDeathEvent* GetLastDeathEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDisplaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownedRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownedDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDisplayDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERSTDeathState GetDeathState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTHealthComponent* FindHealthComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void EnableDisplay(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void DisableDisplay();
    
    UFUNCTION(BlueprintCallable)
    void DamageSelfDestruct(bool bFellOutOfWorld, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    bool CanEnableDisplay(float Duration);
    
};

