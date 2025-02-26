#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
#include "RSTAdditionalGameplayEffectData.h"
#include "RSTGameplayAbility_Interact.h"
#include "RSTGameplayAbility_ReviveAlly.generated.h"

class AActor;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_ReviveAlly : public URSTGameplayAbility_Interact {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAdditionalGameplayEffectData> TargetEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetCancelAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayEffectHandle> ActiveTargetEffectHandles;
    
public:
    URSTGameplayAbility_ReviveAlly();

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ReviveAlly(AActor* ActorToRevive);
    
    UFUNCTION(BlueprintCallable)
    void OnRevived(AActor* OwningActor, const AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnDeathStarted(AActor* OwningActor, const AActor* InInstigator);
    
};

