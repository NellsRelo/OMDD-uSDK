#include "RSTGameplayAbility_Melee_Target.h"

URSTGameplayAbility_Melee_Target::URSTGameplayAbility_Melee_Target() {
}

AActor* URSTGameplayAbility_Melee_Target::GetTargetedActor_Implementation() const {
    return NULL;
}

bool URSTGameplayAbility_Melee_Target::FilterTargetActor_Implementation(AActor* Actor, float MaxAngle, float MaxDistance) const {
    return false;
}


