#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "InteractableObjectsChangedEventDelegate.h"
#include "RSTAbilityTask_WaitInteract.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_WaitInteract : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableObjectsChangedEvent InteractableObjectsChanged;
    
    URSTAbilityTask_WaitInteract();

};

