#include "RSTAbilityTask_AICollectPawns.h"

URSTAbilityTask_AICollectPawns::URSTAbilityTask_AICollectPawns() {
}

URSTAbilityTask_AICollectPawns* URSTAbilityTask_AICollectPawns::RSTAICollectPawns_AttributeRadius(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* MovingActor, FGameplayAttribute RadiusAttribute, const float ScanRate, const float Duration, bool bShowDebugCircle) {
    return NULL;
}

URSTAbilityTask_AICollectPawns* URSTAbilityTask_AICollectPawns::RSTAICollectPawns(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* MovingActor, const float Radius, const float ScanRate, const float Duration, const bool bShowDebugCircle) {
    return NULL;
}

TArray<APawn*> URSTAbilityTask_AICollectPawns::GetCurrentCollection() {
    return TArray<APawn*>();
}


