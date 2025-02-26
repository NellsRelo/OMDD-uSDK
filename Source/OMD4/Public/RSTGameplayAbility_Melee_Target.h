#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayAbility_MeleeWeapon.h"
#include "RSTGameplayAbility_Melee_Target.generated.h"

class AActor;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_Melee_Target : public URSTGameplayAbility_MeleeWeapon {
    GENERATED_BODY()
public:
    URSTGameplayAbility_Melee_Target();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetTargetedActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FilterTargetActor(AActor* Actor, float MaxAngle, float MaxDistance) const;
    
};

