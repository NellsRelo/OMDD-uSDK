#include "RSTAbilityCollisionBlueprintLibrary.h"

URSTAbilityCollisionBlueprintLibrary::URSTAbilityCollisionBlueprintLibrary() {
}

FRSTAbilityCollisionSpecHandle URSTAbilityCollisionBlueprintLibrary::MakeAbilityCollisionSpec(URSTAbilityCollisionDefinition* Definition, UAbilitySystemComponent* AbilitySystemComponent, float Level) {
    return FRSTAbilityCollisionSpecHandle{};
}

FRSTAbilityCollisionSpecHandle URSTAbilityCollisionBlueprintLibrary::AssignSetByCallerMagnitude(FRSTAbilityCollisionSpecHandle Spec, FGameplayTag DataTag, float Magnitude) {
    return FRSTAbilityCollisionSpecHandle{};
}


