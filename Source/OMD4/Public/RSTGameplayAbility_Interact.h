#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTGameplayAbility.h"
#include "RSTGameplayAbility_Interact.generated.h"

class AActor;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_Interact : public URSTGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChannelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SuccessGameplayCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
public:
    URSTGameplayAbility_Interact();

private:
    UFUNCTION(BlueprintCallable)
    void TriggerInteractSuccess();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
};

