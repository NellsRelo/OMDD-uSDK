#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayAbility.h"
#include "RSTGameplayAbility_AITeleport.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_AITeleport : public URSTGameplayAbility {
    GENERATED_BODY()
public:
    URSTGameplayAbility_AITeleport();

    UFUNCTION(BlueprintCallable)
    bool CompleteTeleport();
    
    UFUNCTION(BlueprintCallable)
    bool BeginTeleport(bool bUseEnemyGroupLocations, int32 EnemyGroupSize, float EnemyGroupRadius);
    
};

