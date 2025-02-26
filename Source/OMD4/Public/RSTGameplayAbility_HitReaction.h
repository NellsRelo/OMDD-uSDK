#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTGameplayAbility.h"
#include "RSTGameplayAbility_HitReaction.generated.h"

class URSTAppliedHitReactData;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_HitReaction : public URSTGameplayAbility {
    GENERATED_BODY()
public:
    URSTGameplayAbility_HitReaction();

protected:
    UFUNCTION(BlueprintCallable)
    void NotifyClientKnockback(FName TaskName, FVector Direction, float Distance, float Height, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ReceiveHitData(const URSTAppliedHitReactData* KnockbackData);
    
};

