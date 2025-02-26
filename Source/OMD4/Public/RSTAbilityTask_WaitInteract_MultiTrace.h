#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "RSTAbilityTask_WaitInteract.h"
#include "RSTInteractionQuery.h"
#include "RSTAbilityTask_WaitInteract_MultiTrace.generated.h"

class UGameplayAbility;
class URSTAbilityTask_WaitInteract_MultiTrace;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_WaitInteract_MultiTrace : public URSTAbilityTask_WaitInteract {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInteractionQuery InteractionQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilityTargetingLocationInfo StartLocation;
    
public:
    URSTAbilityTask_WaitInteract_MultiTrace();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_WaitInteract_MultiTrace* WaitForInteractableTargets_MultiSweep(UGameplayAbility* OwningAbility, FRSTInteractionQuery NewInteractionQuery, FGameplayAbilityTargetingLocationInfo NewStartLocation, float InteractionScanRange, float InteractionScanRate, bool bShowDebug);
    
};

