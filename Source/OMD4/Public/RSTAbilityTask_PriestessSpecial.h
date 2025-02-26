#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "PriestessSpecialCompleteDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "RSTAbilityTask_PriestessSpecial.generated.h"

class ARSTProjectile;
class UGameplayAbility;
class URSTAbilityTask_PriestessSpecial;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_PriestessSpecial : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPriestessSpecialCompleteDelegate OnPriestessSpecialComplete;
    
    URSTAbilityTask_PriestessSpecial();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_PriestessSpecial* RSTPriestessSpecialTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, TSubclassOf<ARSTProjectile> ProjectileClass, float DamageValue, float TaskRadius, float ProjectilePeriod, float TotalDuration);
    
};

