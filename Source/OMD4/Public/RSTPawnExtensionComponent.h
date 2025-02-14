#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/GameFrameworkComponentDelegates.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "Components/PawnComponent.h"
#include "RSTPawnExtensionComponent.generated.h"

class AActor;
class URSTAbilitySystemComponent;
class URSTPawnDefinition;
class URSTPawnExtensionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTPawnExtensionComponent : public UPawnComponent, public IGameFrameworkInitStateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PawnDefinition, meta=(AllowPrivateAccess=true))
    URSTPawnDefinition* PawnDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AbilitySystemComponent;
    
public:
    URSTPawnExtensionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PawnDefinition();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsPawnReadyToInitialize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAbilitySystemComponent* GetRSTAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTPawnExtensionComponent* FindPawnExtensionComponent(const AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool UnregisterInitStateDelegate(FActorInitStateChangedBPDelegate Delegate) override PURE_VIRTUAL(UnregisterInitStateDelegate, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterAndCallForInitStateChange(FGameplayTag RequiredState, FActorInitStateChangedBPDelegate Delegate, bool bCallImmediately) override PURE_VIRTUAL(RegisterAndCallForInitStateChange, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasReachedInitState(FGameplayTag DesiredState) const override PURE_VIRTUAL(HasReachedInitState, return false;);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetInitState() const override PURE_VIRTUAL(GetInitState, return FGameplayTag{};);
    
    UFUNCTION(BlueprintCallable)
    FName GetFeatureName() const override PURE_VIRTUAL(GetFeatureName, return NAME_None;);
    
};

