#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "ERSTCharacterWeightClass.h"
#include "GrappleCharacterDelegateDelegate.h"
#include "RSTAbilityTask_GrappleCharacter.generated.h"

class ARSTCharacter;
class UGameplayAbility;
class URSTAbilityTask_GrappleCharacter;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_GrappleCharacter : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrappleCharacterDelegate OnGrappleStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrappleCharacterDelegate OnGrappleFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrappleCharacterDelegate OnGrappleFailed;
    
    URSTAbilityTask_GrappleCharacter();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_GrappleCharacter* GrappleCharacterToLocation(UGameplayAbility* OwningAbility, ARSTCharacter* InCharacter, const FVector& InTargetLocation, float InSpeed, float InHoldDuration, ERSTCharacterWeightClass InMaxWeightClass);
    
};

