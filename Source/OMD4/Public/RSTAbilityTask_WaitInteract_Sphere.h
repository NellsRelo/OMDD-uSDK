#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "RSTAbilityTask_WaitInteract.h"
#include "RSTInteractionQuery.h"
#include "RSTAbilityTask_WaitInteract_Sphere.generated.h"

class UGameplayAbility;
class URSTAbilityTask_WaitInteract_Sphere;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_WaitInteract_Sphere : public URSTAbilityTask_WaitInteract {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInteractionQuery InteractionQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilityTargetingLocationInfo StartLocation;
    
public:
    URSTAbilityTask_WaitInteract_Sphere();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_WaitInteract_Sphere* WaitForInteractableTargets_Sphere(UGameplayAbility* OwningAbility, FRSTInteractionQuery NewInteractionQuery, FGameplayAbilityTargetingLocationInfo NewStartLocation, float InteractionScanRange, float InteractionScanRate, bool bShowDebug);
    
};

