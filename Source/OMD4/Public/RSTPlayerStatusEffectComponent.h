#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayEffect.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffect.h"
#include "RSTPlayerStatusEffectDataRepl.h"
#include "RSTPlayerStatusEffectComponent.generated.h"

class AActor;
class UAbilitySystemComponent;
class URSTPlayerStatusEffectComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTPlayerStatusEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTPlayerStatusEffectDelegate, const TArray<FRSTPlayerStatusEffectDataRepl>&, Data);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPlayerStatusEffectDelegate OnAppliedStatusEffectsUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedStatusEffectData, meta=(AllowPrivateAccess=true))
    TArray<FRSTPlayerStatusEffectDataRepl> ReplicatedStatusEffectData;
    
public:
    URSTPlayerStatusEffectComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedStatusEffectData();
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayEffectRemoved(const FActiveGameplayEffect& GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayEffectApplied(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRSTPlayerStatusEffectDataRepl> GetStatusEffectData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTPlayerStatusEffectComponent* FindPlayerStatusEffectComponent(const AActor* Actor);
    
};

