#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "RSTAbilityTask_TrackVelocity.generated.h"

class UMovementComponent;

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTAbilityTask_TrackVelocity : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementComponent* CachedMovementComponent;
    
public:
    URSTAbilityTask_TrackVelocity();

};

