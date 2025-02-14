#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RSTMeleeAbilityHitContext.generated.h"

class AActor;
class URSTGameplayAbility_CombatBase;

USTRUCT(BlueprintType)
struct FRSTMeleeAbilityHitContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URSTGameplayAbility_CombatBase> AbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SwingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAerialAttack;
    
    OMD4_API FRSTMeleeAbilityHitContext();
};

