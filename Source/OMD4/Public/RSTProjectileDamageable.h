#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTProjectile.h"
#include "RSTProjectileDamageable.generated.h"

class AActor;
class UAbilitySystemComponent;
class URSTAbilitySet;
class URSTAbilitySystemComponent;
class URSTHealthComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTProjectileDamageable : public ARSTProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URSTAbilitySet> AbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ProjectileIdentifierTag;
    
public:
    ARSTProjectileDamageable(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnDeathStarted(AActor* OwningActor, const AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnDeathFinished(AActor* OwningActor, const AActor* InInstigator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAbilitySystemComponent* GetRSTAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilitySystemComponent* GetOwnerAbilitySystemComponent() const;
    
};

