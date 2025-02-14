#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayAbility.h"
#include "RSTGameplayAbility_Jump.generated.h"

UCLASS(Abstract, Blueprintable)
class URSTGameplayAbility_Jump : public URSTGameplayAbility {
    GENERATED_BODY()
public:
    URSTGameplayAbility_Jump();

protected:
    UFUNCTION(BlueprintCallable)
    void CharacterJumpStop();
    
    UFUNCTION(BlueprintCallable)
    void CharacterJumpStart();
    
};

