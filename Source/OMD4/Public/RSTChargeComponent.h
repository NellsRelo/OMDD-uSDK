#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "RSTChargeConfigData.h"
#include "RSTChargeComponent.generated.h"

class AActor;
class URSTAbilitySystemComponent;
class URSTChargeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTChargeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTChargeDelegate, FGameplayTag, Tag);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTChargeDelegate OnMaxChargesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTChargeDelegate OnCurrentChargesUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTChargeConfigData> ChargeDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AbilitySystemComponent;
    
public:
    URSTChargeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UninitializeFromAbilitySystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeWithAbilitySystem(URSTAbilitySystemComponent* InASC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAbilitySystemComponent* GetOwningAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMaxCharges(FGameplayTag Tag, int32& OutMaxCharges, bool bIncludeBonus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentCharges(FGameplayTag Tag, int32& OutVal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTChargeComponent* FindChargeComponent(const AActor* Actor);
    
};

